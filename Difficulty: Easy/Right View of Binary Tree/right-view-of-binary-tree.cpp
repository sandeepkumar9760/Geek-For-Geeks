/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    void right_view(Node* node , vector<int>&ans , int level){
        if(!node) return;
        if(level==ans.size()){
            ans.push_back(node->data);
            
        }
        // we follow preorder
        right_view(node->right,ans,level+1);
        right_view(node->left,ans,level+1);
    }
    vector<int> rightView(Node *root) {
        //  code here
        vector<int>ans;
        right_view(root,ans,0);
        return ans;
    }
};