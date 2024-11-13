#include <iostream>
using namespace std;

class MyStack {
    int top;
    int size;
    int* arr;

public:
    MyStack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    ~MyStack() {
        delete[] arr;
    }

    void push(int element) {
        if (top < size - 1) {
            top++;
            arr[top] = element;
        } else {
            cout << "Stack overflow" << endl;
        }
    }

    void pop() {
        if (top >= 0) {
            top--;
        } else {
            cout << "Stack underflow" << endl;
        }
    }

    int peek() {
        if (top >= 0) {
            return arr[top];
        } else {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    MyStack st(5);

    st.push(9);
    st.push(12);

    cout << "Top element is: " << st.peek() << endl;

    st.pop();
    cout << "Top element after pop: " << st.peek() << endl;

    return 0;
}
