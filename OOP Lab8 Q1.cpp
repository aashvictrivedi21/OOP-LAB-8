#include<iostream>
#include<math.h>
using namespace std;

class account
{
    protected:
    char c_name[50];
    long int acc_no;
    char ac_type[25];
    public:
    void get_account()
    {
        cout<<"Enter customer name:"<<endl;
        cin>>c_name;
	fflush(stdin);
        cout<<"Enter account number:"<<endl;
        cin>>acc_no;
	fflush(stdin);
        cout<<"Enter the account type:"<<endl;
        cin>>ac_type;
	fflush(stdin);
    }
};
class cur_acct:public account
{
    protected:
    float balance;
    float min_balance;
    float penalty;
    public:
    void get_curacct()
    {
        cout<<"Enter the current account balance:"<<endl;
        cin>>balance;
	fflush(stdin);
        min_balance=10000;
        penalty=0;
    
    }
    void add_deposit()
    {
        float amt;
        cout<<"Enter the amount to be deposited in the current account:"<<endl;
        cin>>amt;
	fflush(stdin);
        balance=balance+amt; //update the balance after deposit
        cout<<"Updated balance in the current account:"<<balance<<endl;
    }
    void withdraw_curacct()
    {
        float wamt;
        cout<<"Enter the amt to be withdraw:"<<endl;
        cin>>wamt;
	fflush(stdin);
        
        if(wamt>balance)
        {
            cout<<"\n YOU CAN'T WITHDRAW MORE THAN YOUR BALANCE!!"<<endl;
        }
        else
        {
            balance=balance-wamt;
            cout<<"Updated balance in current account:"<<balance<<endl;
        }
    }
    void cal_penalty()
    {
        if (balance<min_balance)
        {
            penalty=1000;
            balance=balance-1000;
            cout<<"Penalty=1000";
            cout<<"Updated balance (after deducting penalty)";
        }
    }
};
class sav_acct:public account
{ 
    protected:
    float s_balance;
    float R,T,CI;
    public:
    void get_savacct()
    {
        cout<<"Enter saving account balance:"<<endl;
        cin>>s_balance; 
	fflush(stdin);
        R=5;
        cout<<"Enter the term;"<<endl;
        cin>>T;
	fflush(stdin);
        CI=s_balance*pow(CI+R/100,T);
        cout<<"Compoud Interest:"<<CI<<endl;
    
    }
};
int main()
{
    sav_acct s1; //Saving Object
    cur_acct c1; //current object 
    c1.get_account();
    c1.get_curacct();
    c1.add_deposit();
    c1.withdraw_curacct();
    c1.cal_penalty();
    s1.get_savacct();
    
}
