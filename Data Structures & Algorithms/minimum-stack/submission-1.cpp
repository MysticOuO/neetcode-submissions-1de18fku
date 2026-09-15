class MinStack {
private : 
    std::stack<int> stack;
    std::stack<int> minstack;

public:
    MinStack() {}
    
    void push(int val) {
        stack.push(val);
        val = min(val, minstack.empty() ? val : minstack.top());
        minstack.push(val);
    }
    
    // remember to pop both stack to keep them aligned
    void pop() {
        stack.pop();
        minstack.pop();
    }
    
    int top() {
        return stack.top();
    }
    
    int getMin() {
        return minstack.top();
    }
};
