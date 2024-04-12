#include <iostream>
#include <stack>

using namespace std;

class StackMinimum {
private:
    stack<int> data; 
    stack<int> min; 

public:
    void push(int x) {
        data.push(x);
        if (min.empty() || x <= min.top()) {
            min.push(x);
        }
    }

    void pop() {
        if (data.empty()) {
            return;
        }
        if (data.top() == min.top()) {
            min.pop();
        }
        data.pop();
    }

    int getMin() {
        if (min.empty()) {
            return -1; 
        }
        return min.top();
    }

    int top() {
        if (data.empty()) {
            return -1; 
        }
        return data.top();
    }
};

int main() {
    StackMinimum* StackMin = new StackMinimum();
    StackMin->push(10);
    StackMin->push(-12);
    StackMin->push(22);  

    cout << StackMin->getMin() << endl; // pokaże -12

    StackMin->pop();
    cout << StackMin->top() << endl;    // pokaże -12
    cout << StackMin->getMin() << endl; // pokaże -12

    delete StackMin; 
    return 0;
}
