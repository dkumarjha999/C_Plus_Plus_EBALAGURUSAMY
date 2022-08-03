
#include <bits/stdc++.h>
using namespace std;

int factorial(int n){       // factorial of n
    if(n<=1) return 1;
    int ans=1;
    for(int i=2;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}

double sinx(int n,double x){        // sinx=x-x^3/3!+x^5/5!-x^7/7! ......
    double ans=0;
    int itr=1;
    for(int i=1;i<=n;i=i+2){
        ans+=itr*pow(x,i)/factorial(i);
        itr=-1*itr;
    }
    return ans;
}

double cosx(int n,double x){    // // cosx=1-x^2/2!+x^4/4!-x^6/6! ......
    double ans=1;
    int itr=-1;
    for(int i=2;i<=n;i=i+2){
        ans+=itr*pow(x,i)/factorial(i);
        itr=-1*itr;
    }
    return ans;
}


double sumexp(int n){        // exp = 1+1/2^2+1/3^3+ .....
    double ans=0;
    for(int i=1;i<=n;i++){
        ans+=double(1)/pow(i,i);
    }
    return ans;    
}


int main()
{
    int n;
    cout<<"Enter no of terms in expression := ";
    cin>>n;
    double x;
    cout<<"Enter value of x in radian := ";
    cin>>x;    
    cout<<"Sinx for n , x =: "<<n<<" , "<<x<<" is =: "<<sinx(n,x)<<endl;        // calling function
    cout<<"Cosx for n , x =: "<<n<<" , "<<x<<" is =: "<<cosx(n,x)<<endl;
    cout<<"Sumexp for n =: "<<n<<" is =: "<<sumexp(n)<<endl;
}
