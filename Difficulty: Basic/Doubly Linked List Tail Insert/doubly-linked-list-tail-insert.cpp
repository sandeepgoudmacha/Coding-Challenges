/* Structure of doubly linked list node
class Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
};
*/
class Solution {
    public:

    Node *insertInTail(Node *head, int data) {
        // code here
        Node* newNode=new Node(data);
         if(head == NULL) return newNode;

        Node*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->prev=temp;
        return head;
    }
};