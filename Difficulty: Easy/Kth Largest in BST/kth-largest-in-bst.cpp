/* Structure of a Binary Tree Node
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
    void solve(Node *node , int &k , int &ans){
        if(!node || k==0) return;
        
        solve(node->right,k,ans);
        k=k-1;
        if(k==0) ans = node->data;
        solve(node->left,k,ans);
    }
    int kthLargest(Node *root, int k) {
        // code here
        int ans = -1;
        solve(root,k,ans);
        return ans;
    }
};