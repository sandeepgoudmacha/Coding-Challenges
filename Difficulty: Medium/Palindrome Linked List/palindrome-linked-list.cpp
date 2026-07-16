/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = nullptr;
    }
};*/

class Solution {
  public:
  Node* reverse(Node* head){
      Node* prev1=NULL;
      Node* temp=head;
      while(temp!=NULL){
          Node*front=temp->next;
          temp->next=prev1;
          prev1=temp;
          temp=front;
      }
      return prev1;
  }
  
    bool isPalindrome(Node *head) {
        //  code here
        if(head==NULL || head->next==NULL) return 1;
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            
        }
        Node* second=reverse(slow);
        Node* first=head;
        while(second!=NULL){
            if(first->data != second->data) return 0;
            first=first->next;
            second=second->next;
        }
        return 1;
    }
};