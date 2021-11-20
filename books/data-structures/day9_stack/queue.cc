
/*
* Queue FIFO 
* Stack LIFO
*/

#include <stack>

using namespace std;

class MyQueue {
public:
    MyQueue() {

    }

    void push(int x) {
        stk1.push(x);
    }

    int pop() {
        if (stk2.empty()) {//如果stk2是空的，那么把stk1都注入stk2中
            while (!stk1.empty()) {
                stk2.push(stk1.top());
                stk1.pop();
            }
        }
        int ans = stk2.top();
        stk2.pop();
        return ans;
    }

    int peek() {
        if(stk2.empty()){ //如果stk2是空的，那么把stk1都注入stk2中
            while(!stk1.empty()){
                stk2.push(stk1.top());
                stk1.pop();
            }
        }
        return stk2.top();
    }

    bool empty() {
        if(stk1.empty() && stk2.empty()) return true;
        else return false;
    }

private:
    stack<int> stk1;
    stack<int> stk2;

};
