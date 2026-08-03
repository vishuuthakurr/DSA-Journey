/*
class Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */

class Solution {
  public:
    int getMiddle(Node* head) {
        // code here
        Node *temp=head;
        if(head==NULL)
        {
            return {};
        }
        if(head->next==NULL)
        {
            int result=head->data;
        }
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        int ans;
        if(count%2==0)
        {
            ans=(count/2);
            ans=ans;
        }
        else
        {
            ans=count/2;
        }
        temp=head;
        while(ans!=0)
        {
            temp=temp->next;
            ans--;
        }
        int result=temp->data;
        return result;
    }
};