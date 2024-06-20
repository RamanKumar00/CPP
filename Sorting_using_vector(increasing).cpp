#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(76);
    v.push_back(45);
    v.push_back(98);
    v.push_back(23);
    v.push_back(100);
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
