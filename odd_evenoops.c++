#include<iostream>
using namespace std;
class check
{
    private:
    int num;
    public:
    void getdata()
    {
      cout<<"enter a num: ";
      cin>>num;
    }
    void putdata()
    {
          if(num % 2==0)
        {
            cout<<"given number is even";
        }
        else
        {
            cout<<"given number is odd";
        }
    }

};
int main()
{
    check aa;
    aa.getdata();
    aa.putdata();
    return 0;

}