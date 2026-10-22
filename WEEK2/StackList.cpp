#include <iostream>
using namespace std;

struct Stack {
    int a[100];
    int n = 0;

void push(int x) {
   a[n] = x;
   n++;
}
int pop() {
    n--;
    return a[n];
}
bool isEmpty() {
    if (n == 0) {
        cout << "Stack is empty ";
    } else {
        cout << "Stack isn't empty ";
    }
    return 0;
}
int size() {
    if (n == 0) {
        return -1;
    } else {
        return n;
    }
}
};
int main() {
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout << "Popped: " << st.pop() << endl;
        cout << "Is the stack empty ? " << endl;
        cout << st.isEmpty()<< endl;
        cout << "The stack's size: " << st.size();
}

    