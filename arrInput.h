#ifndef ARR_INPUT_H
#define ARR_INPUT_H

#include <iostream>
#include <vector>

using namespace std;

vector<int> arrIn() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the element of array: " << endl;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        //cout<<"\n";
    }
    return arr;
}

#endif 