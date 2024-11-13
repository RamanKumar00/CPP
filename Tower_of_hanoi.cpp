#include<iostream>
using namespace std;

void towerOfHanoi(int n, char f, char t, char a) {
    if (n == 1) {
        cout << "Move disk 1 from rod " << f << " to rod " << t << endl;
        return;
    }

    towerOfHanoi(n - 1, f, a, t);
    cout << "Move disk " << n << " from rod " << f << " to rod " << t << endl;
    towerOfHanoi(n - 1, a, t, f);
}

int main() {
    int n;
    cout << "Enter the number of disks: " << endl;
    cin >> n;
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}
