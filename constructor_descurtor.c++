#include<iostream>
using namespace std;

class Rectangle {
public:
    int length;
    int width;

    Rectangle(int l, int w) {
        length = l;
        width = w;
        cout << "Rectangle created." << endl;
    }

    ~Rectangle() {
        cout << "Rectangle destroyed." << endl;
    }

    int area() {
        return length * width;
    }
};

int main() {
    Rectangle r1(5, 10);
    cout << "Area: " << r1.area() << endl;

    return 0;
}
