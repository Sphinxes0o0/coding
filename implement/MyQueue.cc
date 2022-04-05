#include <stack>
class MyQueue {
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        in.push(x);
    }
    
    int pop() {
        if (out.empty()) {
            in_to_out();
        }
        int x = out.top();
        out.pop();
        return x;
    }
    
    int peek() {
        if (out.empty()) {
            in_to_out();
        }
        return out.top();
    }
    
    bool empty() {
        return in.empty() && out.empty();
    }

private:
    std::stack<int> in, out;
    void in_to_out() {
        while (!in.empty()) {
            out.push(in.top());
            in.pop();
        }
    }

};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */