
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cout<<"Enter no of term in expression := ";
    cin>>n;
    double e=2.71828;       // taking standard value of e in maths  
    double ans;
    for(int i=1;i<=n;i++){      // evaluating expression y=e^-x for given n terms
        ans=1/pow(e,i);
        cout<<"value of y=: "<<ans<<" at x=: "<<i<<endl;
    }

}
