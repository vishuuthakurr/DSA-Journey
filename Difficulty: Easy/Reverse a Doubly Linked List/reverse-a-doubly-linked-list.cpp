/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

*/
/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        if(head==nullptr||head->next==nullptr){
            return head;
            
        }
        else{
        // code here
        Node*pre=nullptr;
        Node*curr=head;
        while(curr){
            pre=curr->prev;
            curr->prev=curr->next;
            curr->next=pre;
            curr=curr->prev;
        }
        return pre->prev;
        }
        
    }
};