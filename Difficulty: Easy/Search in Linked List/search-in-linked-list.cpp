/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
}; */

class Solution {
  public:
    bool searchKey(Node* head, int key) {
        // Code here
        Node* find = head;
        while(find!=NULL){
            if(find->data==key){
                return true;
            }else{
                find = find->next;
            }
        }
        return false;
        
    }
};
