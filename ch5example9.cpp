#include <bits/stdc++.h>
using namespace std;
class Sample2;      // pre definig class Sample2 as it is used in friend function
class Sample1{
    int a; 
  public:
    void setVal(int x){
        a=x;
    }
    friend float getMax(Sample1,Sample2); // friend function take object of 2 classes as argument is passed
};

class Sample2{
    int b; 
  public:
    void setVal(int y){
        b=y;
    }
    friend float getMax(Sample1,Sample2); // friend function take object of 2 classes as argument is passed
};

float getMax(Sample1 x, Sample2 y){        // defining friend function which takes 2 different class object as it is friend with both class
       if(x.a>y.b) return x.a;
       else return y.b;
    }

int main()
{
    int p,q;
    cout<<"Enter 2 numbers to find Maxm using friend function to 2 classes :\n";
    cin>>p>>q;
    Sample1 a;
    Sample2 b;
    a.setVal(p);  // setting object a values
    b.setVal(q);
    cout<<"Maxm := "<<getMax(a,b)<<endl; // calling function
    return 0;
}
