/* Node is defined as
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
    Node* segregate(Node* head) {
        // code here
               Node* zeroDummy = new Node(-1);
        Node* oneDummy = new Node(-1);
        Node* twoDummy = new Node(-1);

        // Tail pointers to build each of the lists
        Node* zeroTail = zeroDummy;
        Node* oneTail = oneDummy;
        Node* twoTail = twoDummy;

        // Traverse original list and distribute nodes into 0s, 1s, or 2s list
        Node* curr = head;
        while (curr) {
            if (curr->data == 0) {
                zeroTail->next = curr;
                zeroTail = zeroTail->next;
            } else if (curr->data == 1) {
                oneTail->next = curr;
                oneTail = oneTail->next;
            } else {
                twoTail->next = curr;
                twoTail = twoTail->next;
            }
            curr = curr->next;
        }

        // Connect the three lists:
        // zeroTail -> oneDummy.next -> twoDummy.next
        // Handle edge cases if 0s or 1s list is empty
        zeroTail->next = oneDummy->next ? oneDummy->next : twoDummy->next;
        oneTail->next = twoDummy->next;
        twoTail->next = nullptr;  // end the list

        // Update head to new sorted list
        head = zeroDummy->next;

        // Delete dummy nodes (they were placeholders)
        delete zeroDummy;
        delete oneDummy;
        delete twoDummy;
        return head;

    }
};