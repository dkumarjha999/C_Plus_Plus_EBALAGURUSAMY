#include<bits/stdc++.h>
using namespace std;

enum AccountType{Savings,Current,Salary};

class Account{
    string name;
    string accountNumber;
    AccountType type;
    double balance;

    public:
        void openAccount(string n,string accNo,AccountType t,double bal){
            name=n;
            accountNumber=accNo;
            type=t;
            balance=bal;
        }

        void depostit(double amount){
            balance+=amount;
        }   
        
        void withdraw(double amount){
            if(amount>balance){
                cout<<"Insufficient Balance"<<endl;
            }
            else{
                balance-=amount;
            }
        }

        void showBalance(){
            cout<<"Name : "<<name<<endl;
            cout<<"Balance : "<<balance<<endl;
        }
};


int main(){
    Account a;
    cout<<"Open Account \n";
    a.openAccount("John","12345",Savings,1000);
    cout<<"\nShow Balance \n";
    a.showBalance();
    cout<<"\n Deposti amount \n";
    a.depostit(500);
    cout<<"\nShow Balance \n";
    a.showBalance();
    cout<<"\n Withdraw amount \n";
    a.withdraw(2000);
    cout<<"\nShow Balance \n";
    a.showBalance();
    cout<<"\n Withdraw amount \n";
    a.withdraw(300);
    cout<<"\nShow Balance \n";
    a.showBalance();
    return 0;
}