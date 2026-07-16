/* Node Structure
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    Node* deleteMid(Node* head) {
        // code here
          if (head == nullptr || head->next == nullptr) {
        delete head;
        return nullptr;
    }
    Node* slow=head;
    Node* fast=head;
    Node*prev=NULL;
    while(fast!=NULL && fast->next!=NULL){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
        
    }
    prev->next=slow->next;
    slow->next=NULL;
    delete slow;
    return head;
    }
};