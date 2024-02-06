#include<iostream>
using namespace std;


int cube(int num) {
    return num * num * num;
}

int main() {
    int number;

    
    cout << "Enter a number: ";
    cin >> number;

    
    cout << "Cube of " << number << " is: " << cube(number) << endl;

    return 0;
}
