#include <iostream>
#include <vector>

using namespace std;

const int SIZE = 9;

void printGrid(const vector<vector<int>>& grid) {
    for (int row = 0; row < SIZE; row++) {
        if (row % 3 == 0 && row != 0) {
            cout << "---------------------" << endl;
        }
        for (int col = 0; col < SIZE; col++) {
            if (col % 3 == 0 && col != 0) {
                cout << "| ";
            }
            cout << grid[row][col] << " ";
        }
        cout << endl;
    }
}

bool isValid(const vector<vector<int>>& grid, int row, int col, int num) {
    for (int x = 0; x < SIZE; x++) {
        if (grid[row][x] == num || grid[x][col] == num) {
            return false;
        }
    }
    int startRow = row - row % 3, startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i + startRow][j + startCol] == num) {
                return false;
            }
        }
    }
    return true;
}

bool solveSudoku(vector<vector<int>>& grid, int row, int col) {
    if (row == SIZE - 1 && col == SIZE) {
        return true;
    }
    if (col == SIZE) {
        row++;
        col = 0;
    }
    if (grid[row][col] != 0) {
        return solveSudoku(grid, row, col + 1);
    }
    for (int num = 1; num <= SIZE; num++) {
        if (isValid(grid, row, col, num)) {
            grid[row][col] = num;
            if (solveSudoku(grid, row, col + 1)) {
                return true;
            }
            grid[row][col] = 0;
        }
    }
    return false;
}

int main() {
    vector<vector<int>> grid(SIZE, vector<int>(SIZE));

    cout << "Enter the Sudoku grid (0 for empty cells):" << endl;
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            cin >> grid[row][col];
        }
    }

    cout << "Initial Sudoku grid:" << endl;
    printGrid(grid);

    if (solveSudoku(grid, 0, 0)) {
        cout << "Solved Sudoku grid:" << endl;
        printGrid(grid);
    } else {
        cout << "No solution exists" << endl;
    }

    return 0;
}
