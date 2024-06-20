#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>myvect;
    myvect.push_back(2);
    myvect.push_back(4);
    myvect.push_back(8);
    cout<<myvect.size()<<endl;
    cout<<myvect.capacity();
    return 0;
}