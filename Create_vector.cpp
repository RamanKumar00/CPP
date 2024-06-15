// C++ program to create an empty
// vector and push values one
// by one.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Create an empty vector
    vector<int> vect;

    //vect.push_back(10);
    //vect.push_back(20);
   // vect.push_back(30);
   int temp;
   for(int i = 0 ; i < 5 ; i++)
   {
    cin>>temp;
   
    vect.push_back(temp);
   }

    for (int x : vect)
        cout << x << " ";
       

    return 0;
}
