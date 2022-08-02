#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p,n;
    float r,v;
    cout<<"Enter P,R,N for investment equation := ";
    cin>>p>>r>>n;
    
    v=p*pow((1+r),n);   // power function is pow it accept value and n like 2^n is = pow(2,n)
    cout<<"Investment Amount: ="<<v<<endl;

    return 0;
}
