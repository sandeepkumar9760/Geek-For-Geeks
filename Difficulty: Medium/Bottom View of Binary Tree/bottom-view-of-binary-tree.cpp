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
    vector<int> bottomView(Node *root) {
        // code here
        map<int,int>map;
        queue<pair<Node*,int>>q;
        
        q.push({root,0});
        while(!q.empty()){
            Node* crr = q.front().first;
            int level = q.front().second;
            
            q.pop();
            
            map[level]=crr->data;
            if(crr->left){
                q.push({crr->left,level-1});
            }
            if(crr->right){
                q.push({crr->right,level+1});
            }
        }
        vector<int>ans;
        for(auto i : map){
            ans.push_back(i.second);
        }
        return ans;
    }
};