#include <iostream>
using namespace std;

class twostack {
    int *arr;
    int top1;
    int top2;
    int size;

public:
    // Constructor
    twostack(int s) {
        this->size = s;
        this->top1 = -1;
        this->top2 = s;
        arr = new int[s];
    }

    // Push in stack 1
    void push1(int num) {
        if (top2 - top1 > 1) {
            top1++;
            arr[top1] = num;
        } else {
            cout << "Stack Overflow in Stack 1" << endl;
        }
    }

    // Push in stack 2
    void push2(int num) {
        if (top2 - top1 > 1) {
            top2--;
            arr[top2] = num;
        } else {
            cout << "Stack Overflow in Stack 2" << endl;
        }
    }

    // Pop from stack 1
    int pop1() {
        if (top1 >= 0) {
            int ans = arr[top1];
            top1--;
            return ans;
        } else {
            cout << "Stack Underflow in Stack 1" << endl;
            return -1;
        }
    }

    // Pop from stack 2
    int pop2() {
        if (top2 < size) {
            int ans = arr[top2];
            top2++;
            return ans;
        } else {
            cout << "Stack Underflow in Stack 2" << endl;
            return -1;
        }
    }

    // Destructor to deallocate memory
    ~twostack() {
        delete[] arr;
    }
};

int main() {
    twostack st(7);

    // Using push1 and push2 to add elements to stack 1 and stack 2 respectively
    st.push1(23);
    st.push1(24);
    st.push2(56);
    st.push2(78);

    // Pop elements from stack 1 and stack 2
    cout << "Popped from stack 1: " << st.pop1() << endl;
    cout << "Popped from stack 2: " << st.pop2() << endl;

    return 0;
}
