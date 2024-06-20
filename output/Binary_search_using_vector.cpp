#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
     vector<int>myvect;
    myvect.push_back(23);
    myvect.push_back(29);
    myvect.push_back(39);
    myvect.push_back(53);
    myvect.push_back(123);
    myvect.push_back(783);

    cout<<binary_search(myvect.begin(),myvect.end(),783);
    
    return 0;
}