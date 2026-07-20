/*
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
    bool is_valid(Node* root , int maxi , int mini){
        if(root==nullptr) return true;
        if(root->data <=mini || root->data>=maxi){
            return false;
        }
        bool left = is_valid(root->left,root->data,mini);
        bool right = is_valid(root->right,maxi,root->data);
        return left && right;
    }
    bool isBST(Node* root) {
        // code here
        return is_valid(root,INT_MAX , INT_MIN);
        
    }
};