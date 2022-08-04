
#include <bits/stdc++.h>
using namespace std;

inline int maxofthree(int a,int b,int c){
    return a>b&&a>c? a:b>c?b:c;     // if a>b && a>c it means a is largest else out of b or c so if b>c means b is largest else c is lergest 
}

int main()
{
    int a,b,c,max;
    cout<<"Enter 3 numbers := ";
    cin>>a>>b>>c;
    max = maxofthree(a,b,c);    // calling function
    cout<<"max of "<<a<<" , "<<b<<" , "<<c<<" is := "<<max<<endl;
    return 0;
}
