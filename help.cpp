#include <iostream>

void towerOfHanoi(int n, char fromRod, char toRod, char auxRod) {
    if (n == 1) {
        // Base case: move one disk
        std::cout << "Move disk 1 from rod " << fromRod << " to rod " << toRod << std::endl;
        return;
    }

    // Move n - 1 disks from fromRod to auxRod, so they are out of the way
    towerOfHanoi(n - 1, fromRod, auxRod, toRod);

    // Move the nth disk from fromRod to toRod
    std::cout << "Move disk " << n << " from rod " << fromRod << " to rod " << toRod << std::endl;

    // Move the n - 1 disks that we left on auxRod to toRod
    towerOfHanoi(n - 1, auxRod, toRod, fromRod);
}

int main() {
    int n = 3; // Number of disks
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}