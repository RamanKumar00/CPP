#include<iostream>
using namespace std;
class loot
{
   
    public:
    int i,n;
    void getdata()
    {
        cout<<"enter the value of n: ";
        cin>>n;

    }
    void putdata()
    {
        for(i=0;i<n;i++)
        {
            cout<<i<<endl;
        }
    }
};
int main()
{
    loot port;
    port.getdata();
    port.putdata();
    return 0;

}