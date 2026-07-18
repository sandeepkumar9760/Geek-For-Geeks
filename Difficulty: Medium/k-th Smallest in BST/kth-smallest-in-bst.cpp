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
    void inorder(Node* root , int &k , int &ans){
        if(!root || k==0) return;
       
        inorder(root->left , k , ans);
        k=k-1;
        if(k==0) ans=root->data;
        inorder(root->right,k,ans);
        
        

    }
    int kthSmallest(Node *root, int k) {
        // code here
        int ans = -1;
        inorder(root,k,ans);
        return ans;
    }
};