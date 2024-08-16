#include <iostream>
#include <ctime>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int maxSize = 500000;
    int numIterations = 1000000;

    for (int size = 50; size <= maxSize; size *= 10)
    {
        int *arr = new int[size];
        for (int i = 0; i < size; i++)
        {
            arr[i] = i;
        }

        int target = size;
        cout << "Array size: " << size << ", Target value: " << target << endl;

        clock_t start = clock();
        for (int i = 0; i < numIterations; i++)
        {
            int result = binarySearch(arr, size, target);
        }
        clock_t end = clock();

        int duration = (end - start); 
        cout << "Average time taken: " << duration << " seconds" << endl;

    }

    return 0;
}
