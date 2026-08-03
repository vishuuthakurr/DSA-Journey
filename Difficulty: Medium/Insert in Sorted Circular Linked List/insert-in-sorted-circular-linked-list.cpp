/* structure for a node
class Node {
 public:
  int data;
  Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }
}; */

class Solution {
  public:
    Node* sortedInsert(Node* head, int data) {
        // code here
        Node* demo;
        demo=(struct Node*)malloc(sizeof(struct Node));
        demo->data=data;
        demo->next=NULL;
        if(head==NULL)
        {
            demo->next=demo;
            return demo;
        }
        else if(data < head->data)
        {
            Node *p=head;
            demo->next=head;
            while(p->next!=head)
            {
                p=p->next;
            }
            p->next=demo;
            return demo;
        }
        else
        {
            Node *temp=head;
            while(temp->next->data <data && temp->next != head)
            {
                temp=temp->next;
            }
            demo->next=temp->next;
            temp->next=demo;
            return head;
            
        }
    }
};