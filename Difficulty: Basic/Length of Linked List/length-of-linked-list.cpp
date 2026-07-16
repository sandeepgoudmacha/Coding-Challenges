/* Structure of linked list Node
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    int getCount(Node* head) {
        // Code here
        if(head == NULL) return 0;
        Node* temp=head;
        int c=0;
        while(temp!=NULL){
            c++;
            temp=temp->next;
        }
        return c;
    }
};