#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cout<<"Enter no of units := ";
    cin>>n;
    n=abs(n);
    float amt=50.00;         // initial fix charge
    if(n<=100){
        amt+=n*0.60;         // 60P per unit from 0 to 100 unit
    }
    else if(n>100 && n<=300){
        amt+=100*0.60+(n-100)*0.80;         // 60P per unit from 0 to 100 unit & 80 P for next 200 unit
    }
    else{
        amt+=100*0.60+200*0.80+(n-300)*0.90; 
    }
    if(amt>300){
        amt=amt*1.15;   // if amt >300 then 15% additional charges
    }
    cout<<"Charge for "<<n<<" units =: "<<amt<<endl;
}
