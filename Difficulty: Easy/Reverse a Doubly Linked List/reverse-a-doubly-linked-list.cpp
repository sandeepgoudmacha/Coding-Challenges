/* Structure of doubly linked list node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
        Node*prev1=NULL;
        if(head==NULL || head->next==NULL) return head;
        Node*curr=head;
        while(curr!=NULL){
            curr->prev=curr->next;
            curr->next=prev1;
            prev1=curr;
            curr=curr->prev;
            // curr->next=prev1;
        }
        
        return prev1;
    }
};