#include<iostream>
using namespace std;
class account
{
    char n[20];
    int accountno;
    char accounttype[10];
    int amount;
    int amountdeposit;
    int withdraw;
    int initalvalue;
    int balance;
    public:
    void inital(void);
    void deposit(void);
    void withdraw_check(void);
    void namebalance(void);

};
void account:: inital(void)

{
    cout<<"enter the name of the depositor: ";
    cin>>n;
    cout<<"enter the account number: ";
    cin>>accountno;
    cout<<"enter the type of account: ";
    cin>>accounttype;
    cout<<"enter the balance in your account: ";
    cin>>amount;
}
void account:: deposit(void)
{
    cout<<"enter amount to deposit: ";
    cin>>amountdeposit;
}
void account :: withdraw_check(void)
{
    cout<<"your balance in account is: "<<amount+amountdeposit<<endl;
    cout<<"enter the amount to withdraw: ";
    cin>>withdraw;
}
void account::namebalance(void)
{
    cout<< n <<" has balance "<<amount+amountdeposit-withdraw<<endl;
    
    
}
int main()
{
    account bank[3];
    for(int i=1;i<4;i++)
    {

    
    bank[i].inital();
    bank[i].deposit();
    bank[i].withdraw_check();
    bank[i].namebalance();
    }

}
