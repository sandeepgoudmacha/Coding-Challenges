/* Structure of linked list Node
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
class myStack {
  Node* head;

  public:
    myStack() {
        // Initialize your data members
        head=NULL;
    }

    bool isEmpty() {
        // check if the stack is empty
            return head == NULL;

    }

    void push(int x) {
        // Adds an element x at the top of the stack
        Node* newNode=new Node(x);
       newNode->next=head;
       head=newNode;
    }

    void pop() {
        // Removes the top element of the stack
        if(head==NULL) return;
        Node* temp=head;
        head=head->next;
        delete temp;
        // delete temp;
    }

    int peek() {
        // Returns the top element of the stack
        // If stack is empty, return -1
        if(isEmpty()) return -1;
        return head->data;
    }

    int size() {
        // Returns the current size of the stack.
        if(isEmpty()) return 0;
        Node* prev=head;
        int c=0;
        while(prev!=NULL){
            prev=prev->next;
            c++;
        }
        return c;
    }
};