/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = nullptr ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here
        if(head == NULL || head->next==NULL){
            return head;
        }
        Node*prev1=NULL;
        Node*temp=head;
        while(temp!=NULL){
            Node* front=temp->next;
            temp->next=prev1;
            prev1=temp;
            temp=front;
        }
        return prev1;
    }
};