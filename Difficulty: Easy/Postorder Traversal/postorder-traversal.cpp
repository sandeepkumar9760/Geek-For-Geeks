/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    void postorder(Node* node, vector<int>&ans){
        if(node==NULL) return;
        postorder(node->left,ans);
        postorder(node->right,ans);
        ans.push_back(node->data);
    }
    vector<int> postOrder(Node* root) {
        // code here
        vector<int>ans;
        postorder(root,ans);
        return ans;
    }
};