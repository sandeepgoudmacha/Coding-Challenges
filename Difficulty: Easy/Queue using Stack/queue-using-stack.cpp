class myQueue {
 stack<int>s1;
 stack<int>s2;
  public:
    myQueue() {
        // Initialize your data members
    }

      bool empty() {
        return s1.empty() && s2.empty();
    }
    void enqueue(int x) {
        // Implement enqueue operation
        s1.push(x);
    }

    void dequeue() {
        // Implement dequeue operation
         if (empty())
            return ;
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int x=s2.top();
        s2.pop();

    }

    int front() {
        // Implement front operation
         if (empty())
            return -1;
         if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int x=s2.top();
        return x;
    }

    int size() {
        // Implement size operation
        return s1.size()+s2.size();
    }
};
