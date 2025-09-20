#include <bits/stdc++.h>

using namespace std;

void getSwap(int &x,int &y){

  // here x and y are passed by references so modification in address is happening that is address of x==>address of y hence values are changing
    int tmp=x;
    x=y;
    y=tmp;
}


int main()
{
    int x,y;
    cout<<"Enter two numbers\n";
    cin>>x>>y;
    cout<<"Value Before swapping are \t"<<x<<"\t"<<y<<endl;
    getSwap(x,y);
    cout<<"Value after swapping are \t"<<x<<"\t"<<y<<endl;
    return 0;
}
