/*
class Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    void preorder(Node* node , vector<int>&ans){
        if(!node) return;
        ans.push_back(node->data);
        preorder(node->left,ans);
        preorder(node->right,ans);
    }
    vector<int> preOrder(Node* root) {
        // code here
        vector<int>ans;
        preorder(root,ans);
        return ans;
    }
};