
#include <bits/stdc++.h>
using namespace std;

long int Power(int m,int n=2){    // overloading with (int,int) input parameter
    if(n==2){
        return m*m;
    }else{
        double ans=1;
        while(n>0){
            ans=ans*m;
            n--;
        }
        return ans;
    }
}


double Power(double m,int n=2){   // overloading with (double,int) input parameter
    if(n==2){
        return m*m;
    }else{
        double ans=1;
        while(n>0){
            ans=ans*m;
            n--;
        }
        return ans;
    }
}

int main()
{
    int n=2;
    double m,ans;
    cout<<"Enter base m for power := ";
    cin>>m;
    cout<<"do you want to enter power default value = 2\n please enter Y for yes or N for no := ";
    char powerchar;
    cin>>powerchar;
    if(powerchar=='Y'){
            cout<<"Enter base n for power := ";
            cin>>n;
           ans= Power(m,n);   // will match function based on value of m as int or double
    }
    if(powerchar=='N'){
        ans= Power(m);  //// will match function based on value of m as int or double
    }
    cout<<m <<" raised to power "<<n<<" is := "<<ans<<endl;
    return 0;
}
