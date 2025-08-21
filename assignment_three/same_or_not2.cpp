#include <iostream>
using namespace std;

class Stack {
    int *arr;
    int top;
    int capacity;
public:
    Stack(int size) {
        capacity = size;
        arr = new int[size];
        top = -1;
    }
    void push(int x) {
        if (top < capacity - 1) {
            arr[++top] = x;
        }
    }
    int pop() {
        if (top >= 0) {
            return arr[top--];
        }
        return -1;  
    }
    bool isEmpty() {
        return top == -1;
    }
};

class Queue {
    int *arr;
    int front, rear, capacity;
public:
    Queue(int size) {
        capacity = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }
    void enqueue(int x) {
        if (rear < capacity) {
            arr[rear++] = x;
        }
    }
    int dequeue() {
        if (front < rear) {
            return arr[front++];
        }
        return -1;  
    }
    bool isEmpty() {
        return front == rear;
    }
};

int main() {
    int n, m;
    cin >> n >> m;

    Stack st(n);
    Queue q(m);
 
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        st.push(val);
    }
 
    for (int i = 0; i < m; i++) {
        int val;
        cin >> val;
        q.enqueue(val);
    }
 
    if (n != m) {
        cout << "NO" << endl;
        return 0;
    }

    bool isSame = true;
    while (!st.isEmpty() && !q.isEmpty()) {
        if (st.pop() != q.dequeue()) {
            isSame = false;
            break;
        }
    }

    cout << (isSame ? "YES" : "NO") << endl;
    return 0;
}
