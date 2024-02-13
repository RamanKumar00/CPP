#include<iostream>
using namespace std;
class Raman
{
    private:
    int bank_balance=7474;
    int mobile_number=8658;
    public:
    string name="raman mishra";
    int getbankbalance(){
        return bank_balance;
    }

    int getmobilenumber(){
        return mobile_number;
    }
    
};
int main()
{
    Raman bio;
    cout<<"name of accountant is :"<<bio.name<<endl;
    cout<<"mobile number is: "<<bio.getmobilenumber()<<endl;
    cout<<"bank balance is: "<<bio.getbankbalance()<<endl;
    cout<<"size of Raman is:"<<sizeof(Raman)<<endl;
    return 0;

}