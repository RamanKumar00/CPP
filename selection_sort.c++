#include <iostream>
using namespace std;
int main()

{
    int size;
    cout<<"enter the size of array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i < size; i++)
    {
       // cout << "i am line number 11"; 
        int index = i;
        for (int j = i + 1; j < size; j++)
        {
           // cout << "i am line number 15";
            if (arr[j] < arr[index])
            {
           //     cout << "i am line number 18";
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }
    for (int i = 0; i < size; i++)
    {
       // cout << "i am line number 29";
        cout << arr[i]<<"\t ";
    }
    return 0;
}
