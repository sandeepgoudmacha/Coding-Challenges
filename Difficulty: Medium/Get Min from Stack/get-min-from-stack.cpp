class SpecialStack {
  public:
  stack<int>st;
  int min;
    SpecialStack() {
        // Define Stack
        
    }

    void push(int x) {
        // Add an element to the top of Stack
        if(st.empty()){
            min=x;
            st.push(x);
        }
        else if(x>=min)
            st.push(x);
        else {
            st.push(2*x-min);
            min=x;
            }
            
    }

    void pop() {
        // Remove the top element from the Stack
        if(st.empty()) return;
        if(st.top()<min){
            min=2*min-st.top();
        }
        st.pop();
    }

    int peek() {
        // Returns top element of the Stack
        
        if(st.empty()) return -1;
        if(st.top()>=min) return st.top();
        return min;
    }
    

    bool isEmpty() {
        // Check if stack is empty
        if(st.empty()) return 1;
        else return 0;
    }

    int getMin() {
        // Finds minimum element of Stack
        if(isEmpty()) return -1;
        return min;
        
    }
};