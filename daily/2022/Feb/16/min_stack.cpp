#include <climits>
#include <stack>
#include <algorithm>

/**
class MinStack {
    std::stack<int> x_stack;
    std::stack<int> min_stack;

public:
    MinStack() {
        min_stack.push(INT_MAX);
    }

    void push(int x) {
        x_stack.push(x);
        min_stack.push(std::min(min_stack.top(), x));
    }

    void pop() {
        x_stack.pop();
        min_stack.pop();
    }

    int top() {
        return x_stack.top();
    }

    int get_min() {
        return min_stack.top();
    }
};
*/

template<typename T>
class MinStack {
public:
    MinStack() {
        min_stack.push(INT_MIN);
    }

    void push(T value) {
        t_stack.push(value);
        min_stack.push(std::min(min_stack.pop(), value));
    }

    void pop() {
        t_stack.pop();
        min_stack.pop();
    }

    T top() {
        return t_stack.top();
    }

    T get_min() {
        return min_stack.top();
    }


private:
    std::stack<T> t_stack;
    std::stack<T> min_stack;

};
