/*
class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // code here
        Node* dummy = new Node(0);
        dummy->next = head;
        Node* prev = dummy;
        Node* crr = prev;
        for(int i=1; i<x; i++){
            prev = prev->next;
        }
        prev->next = prev->next->next;
        return crr->next;
    }
};