/*
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};
*/

class Solution {
  public:
    Node *insertAtPos(Node *head, int p, int x) {
        // code here
        Node* newnode = new Node(x);
        Node* crr = head;
        for(int i=0;i<p;i++){
            crr = crr->next;
        }
        if(crr->next!=NULL){
            Node* prev = crr;
            crr = crr->next;
            prev->next = newnode;
            newnode->prev = prev;
            newnode->next = crr;
            crr->prev = newnode;
        }else{
            crr->next = newnode;
            newnode->prev = crr;
        }
        return head;
    }
};