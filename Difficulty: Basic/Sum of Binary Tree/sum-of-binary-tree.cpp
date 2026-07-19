/* Tree Node Structure
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    int sumBT(Node* root) {
        // code here
        if(!root) return 0;
        int left_sum = sumBT(root->left);
        int right_sum = sumBT(root->right);
        return left_sum+right_sum+root->data;
    }
};