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
        Node *temp=head;
        if(head==NULL)
        {
            return false;
        }
        while(temp!=NULL)
        {
            if(key==temp->data)
            {
                return true;
            }
            temp=temp->next;
        }
        return false;
    }
};
