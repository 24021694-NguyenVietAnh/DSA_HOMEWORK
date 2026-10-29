#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

// Add head
Node* AddFirst(Node* head, int x) {
    Node* temp = new Node(x);
    temp->next = head;
    return temp;
}

// Add tail
Node* AddTail(Node* head, int x) {
    Node* temp = new Node(x);
    if (head == NULL) {
        return temp;
    }
    Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = temp;
    return head;
}

// Add k
Node* AddK(Node* head, int x, int k) {
    Node* current = head;
    for (int i = 1; i < k - 1; i++) {
        current = current->next;
    }
    Node* temp = new Node(x);
    temp->next = current->next;
    current->next = temp;
    return head;
}

// Delete head
Node* DeleteFirst(Node* head) {
    if (head == NULL) return NULL;
    Node* current = head->next;
    delete head;
    return current;
}

// Delete tail
Node* DeleteTail(Node* head) {
    if (head == NULL) {
        return NULL;
    }
    if (head->next == NULL) {
        delete head;
        return NULL;
    }
    Node* current = head;
    while (current->next->next != NULL) {
        current = current->next;
    }
    Node* tmp = current->next;
    current->next = NULL;
    delete tmp;
    return head;
}

// Delete element at k
Node* DeleteK(Node* head, int k) {
    Node* current = head;
    for (int i = 1; i < k - 1; i++) {
        current = current->next;
    }

    Node* temp = current->next;
    current->next = temp->next;
    delete temp;
    return head;
}

// Queue
struct Queue {
    Node* a;
    Queue() {
        a = NULL;
    }

    void enqueue(int item) {
        a = AddTail(a, item);
    }

    void dequeue() {
        if (a != NULL) {
            cout << a->data << endl;
            a = DeleteFirst(a);
        }
    }

    int front() {
        if (a != NULL) {
            return a->data;
        }
        return -1;
    }

    void empty() {
        if (a == NULL) {
            cout << "empty" << endl;
        } else {
            cout << "not empty" << endl;
        }
    }
};

int main() {
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    int a = q.front();
    cout << "Front: " << a << endl;

    q.dequeue();
    q.dequeue();
    q.dequeue(); 

    q.empty();
    return 0;
}