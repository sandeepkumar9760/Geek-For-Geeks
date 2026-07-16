/*
Definition for Node
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> zigZagTraversal(Node* root) {
        // code here
        queue<Node*>q;
        vector<int>ans;
        int dir = 0;
        
        q.push(root);
        
        while(!q.empty()){
            int sz = q.size();
            vector<int>temp;
            
            for(int i=0;i<sz;i++){
                Node *crr = q.front();
                q.pop();
                
                temp.push_back(crr->data);
                if(crr->left){
                    q.push(crr->left);
                }
                if(crr->right){
                    q.push(crr->right);
                }
            }
            dir = !dir;
            if(dir){
                ans.insert(ans.end(),temp.begin(),temp.end());
            }else{
                reverse(temp.begin(),temp.end());
                ans.insert(ans.end(),temp.begin(),temp.end());
            }
            
            
        }
        return ans;
    }
};