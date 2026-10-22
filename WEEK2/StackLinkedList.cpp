#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    
    Node(int x) {
        data = x;
        next = nullptr; 
    }
};

class myStack {
    Node* top;
    int count;
    public: 
    myStack() {
        top = nullptr;
        count = 0;
    }
    void push(int x) {
        Node* temp = new Node(x);
        temp-> next = top;
        top = temp;
        count++;
    }
    int pop() {
        if (top == nullptr) {
            return -1;
        }
        Node* temp = top;
        top = top-> next;
        int val = temp-> data;
        count--; 
        
        return val;
        delete temp;
    }
    void peak() {
        if (top == NULL) {
            return -1;
        }
    return top->data;
    }
    bool isEmpty() {
        return top = NULL;
    }
    int size() {
        return count;
    }
};

int main() {
    myStack st;
    
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout <<"Popped: " << st.pop() << endl;
    cout <<"Is stack empty: " << (st.isEmpty() ? "Yes" : "No") << endl;
    cout <<"Size of stack: " << st.size() << endl;
    return 0;
}
