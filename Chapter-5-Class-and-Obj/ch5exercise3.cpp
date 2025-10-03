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
    int n;
    cout<<"Enter number of accounts to create (max 10): ";
    cin>>n;
    if(n>10) n=10;
    Account a[n];

    for(int i=0;i<n;i++){
        string name,accNo;
        int typeInt;
        double bal;
        cout<<"\nOpen Account "<<(i+1)<<"\n";
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Account Number: ";
        cin>>accNo;
        cout<<"Enter Account Type (0-Savings, 1-Current, 2-Salary): ";
        cin>>typeInt;
        cout<<"Enter Initial Balance: ";
        cin>>bal;
        a[i].openAccount(name,accNo,(AccountType)typeInt,bal);
    }

    cout<<"\nEnter customer number to show Balances of a accounts\n";
    int custNo;
    cin>>custNo;
    if(custNo<1 || custNo>n){
        cout<<"Invalid customer number"<<endl;
        return 0;
    }else{
        cout<<"\nShow Balance of Account "<<custNo<<"\n";
        a[custNo-1].showBalance();
    }    

    cout<<"\nDeposit amount to Account "<<custNo<<"\n";
    double depAmount;
    cout<<"Enter amount to deposit: ";  
    cin>>depAmount;
    a[custNo-1].depostit(depAmount);
    cout<<"\nShow Balance of Account "<<custNo<<"\n";
    a[custNo-1].showBalance();

    cout<<"\nWithdraw amount from Account "<<custNo<<"\n";
    double withAmount;
    cout<<"Enter amount to withdraw: ";
    cin>>withAmount;
    a[custNo-1].withdraw(withAmount);
    cout<<"\nShow Balance of Account "<<custNo<<"\n";
    a[custNo-1].showBalance();
    return 0;
}