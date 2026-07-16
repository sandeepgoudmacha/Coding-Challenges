/* Structure of a Linked List Node
class Node
{
    int data;
    Node next;
    Node(int d) {
       data = d;
       next = nullptr;
    }
};*/
class Solution {
  public:
  Node* merge(Node*list1, Node*list2){
      Node* dummy=new Node(-1);
      Node* temp=dummy;
      while(list1!=NULL && list2!=NULL){
          if(list1->data<=list2->data){
              temp->next=list1;
              temp=list1;
              list1=list1->next;
          }
          else{
              temp->next=list2;
              temp=list2;
              list2=list2->next;
          }
      }
      while(list1!=NULL){
           temp->next=list1;
              temp=list1;
              list1=list1->next;
      }
      while(list2!=NULL){
            temp->next=list2;
              temp=list2;
              list2=list2->next;
      }
      return dummy->next;
  }
   Node* findmid(Node*head){
       Node*slow=head;
    Node* fast = head->next;
       while(fast!=NULL && fast->next!=NULL){
           slow=slow->next;
           fast=fast->next->next;
       }
       return slow;
   }
    Node* sortLL(Node* head) {
        // code here
        if(head == NULL || head->next==NULL) return head;
        Node*mid=findmid(head);
        Node* right=mid->next;
        mid->next=NULL;
        Node*left=head;
        left=sortLL(left);
        right=sortLL(right);
        return merge(left, right);
    }
};