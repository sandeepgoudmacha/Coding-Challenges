/*
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

    Node* reverse(Node* head) {
        Node* prev = NULL;
        Node* temp = head;

        while (temp != NULL) {
            Node* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }

        return prev;
    }

    Node* removeLeadingZeros(Node* head) {

        while (head != NULL && head->data == 0 && head->next != NULL)
            head = head->next;

        return head;
    }

    Node* addTwoLists(Node* head1, Node* head2) {

        head1 = removeLeadingZeros(head1);
        head2 = removeLeadingZeros(head2);

        head1 = reverse(head1);
        head2 = reverse(head2);

        Node* dummy = new Node(-1);
        Node* curr = dummy;

        Node* temp1 = head1;
        Node* temp2 = head2;

        int carry = 0;

        while (temp1 != NULL || temp2 != NULL || carry) {

            int sum = carry;

            if (temp1) {
                sum += temp1->data;
                temp1 = temp1->next;
            }

            if (temp2) {
                sum += temp2->data;
                temp2 = temp2->next;
            }

            carry = sum / 10;

            curr->next = new Node(sum % 10);
            curr = curr->next;
        }

        Node* ans = reverse(dummy->next);

        ans = removeLeadingZeros(ans);

        return ans;
    }
};