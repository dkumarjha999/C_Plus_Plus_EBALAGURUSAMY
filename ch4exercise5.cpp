
#include <bits/stdc++.h>
using namespace std;

#define LARGE(a, b, c, max)             \
do {                                    \
    if ((a) >= (b) && (a) >= (c))       \
        *(max) = (a);                   \
    else if ((b) >= (a) && (b) >= (c))  \
        *(max) = (b);                   \
    else                                \
        *(max) = (c);                   \
} while (0)


int main()
{
    int a,b,c,max;
    cout<<"Enter 3 numbers := ";
    cin>>a>>b>>c;
    LARGE(a,b,c,&max);
    cout<<"max of "<<a<<" , "<<b<<" , "<<c<<" is :="<<max<<endl;
    return 0;
}
