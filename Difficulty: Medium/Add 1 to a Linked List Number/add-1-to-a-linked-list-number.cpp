/* Structure of linked list Node
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
   Node* reverse(Node* head){
       Node*temp=head;
       Node*prev=NULL;
       while(temp!=NULL){
           Node* front=temp->next;
           temp->next=prev;
           prev=temp;
           temp=front;
       }
       return prev;
   }
    Node* addOne(Node* head) {
        // code here
        head=reverse(head);
        int carry=1;
        Node* temp=head;
        while(temp!=NULL && carry){
            int sum=temp->data+carry;
             carry=sum/10;
             temp->data=sum%10;
            if(carry && temp->next==NULL){
                temp->next=new Node(carry);
                carry=0;
            }
            temp=temp->next;
        }
        head=reverse(head);
        return head;
    }
};