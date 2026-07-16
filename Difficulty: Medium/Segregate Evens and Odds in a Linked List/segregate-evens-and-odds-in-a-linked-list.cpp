/* Structure of a link list node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/

class Solution {
  public:

    Node *divide(Node *head) {
        // code here
        if(head==NULL) return NULL;
        Node*estart=NULL;
        Node* eend=NULL;
        Node*ostart=NULL;
        Node* oend=NULL;
        Node*temp=head;
        while(temp!=NULL){
            Node* next=temp->next;
            temp->next=NULL;
            if((temp->data)%2==0){
                if(estart==NULL){
                    estart=temp;
                    eend=temp;
                }
                else{
                eend->next=temp;
                eend=temp;
                }
            }
            else{
                if(ostart==NULL){
                    ostart=temp;
                    oend=temp;
                }
                else{
                oend->next=temp;
                oend=temp;
                }
            }
            temp=next;
        }
        if(estart == NULL)
            return ostart;
        if (oend)
             oend->next = NULL;
        if(ostart == NULL)
            return estart;
        eend->next=ostart;
        return estart;
    }
};