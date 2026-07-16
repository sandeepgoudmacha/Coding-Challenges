/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        // code here
        if(head==NULL && head->next==NULL) return 0;
        int l=0;
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                l=1;
                slow=slow->next;
                while(slow!=fast){
                    slow=slow->next;
                    l++;
                }
                return l;
            }
        }
        return 0;
    }
};