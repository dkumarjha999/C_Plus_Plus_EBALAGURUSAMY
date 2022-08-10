
#include <bits/stdc++.h>
using namespace std;
class Sample2;      // pre definig class Sample2 as it is used in friend function
class Sample1{
    int a; 
  public:
    void setVal(int x){
        a=x;
    }
    void showData(){
        cout<<" Data :="<<a<<endl;
    }
    friend void getSwap(Sample1 &x,Sample2 &y); // friend function take object of 2 classes as argument is passed
};

class Sample2{
    int b; 
  public:
    void setVal(int y){
        b=y;
    }
    void showData(){
        cout<<" Data :="<<b<<endl;
    }
    friend void getSwap(Sample1 &x,Sample2 &y); // friend function take object of 2 classes as argument by reference is passed
};

void getSwap(Sample1 &x, Sample2 &y){        // defining friend function which takes 2 different class object pass by reference. it is friend with both class
       int tmep=x.a;
       x.a=y.b;
       y.b=tmep;
    }

int main()
{
    // swapping private private data member using friend function by passing values by reference
    
    int p,q;
    cout<<"Enter 2 numbers to find Maxm using friend function to 2 classes :\n";
    cin>>p>>q;
    Sample1 m;
    Sample2 n;
    cout<<"2 numbers before swapping :"<<p<<"\t"<<q<<endl;
    m.setVal(p);  // setting object a values
    n.setVal(q);
    getSwap(m,n); // calling function
    cout<<"2 numbers after swapping :"<<endl;
    m.showData();
    n.showData();
    return 0;
}
