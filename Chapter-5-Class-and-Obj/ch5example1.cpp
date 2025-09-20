
#include <bits/stdc++.h>
using namespace std;

class  item{
  int number;           // if nothing is written by default it is private
  float cost;
  
  public:
    void getdata(int a,float b);    // function declaration
    
    void putdata(){     // defining function inside the class
        cout<<"number := "<<number<<" , cost := "<<cost<<endl;
    }
};

void item::getdata(int a,float b){      // defining member function out of class 
    number=a;
    cost=b;
    
}

int main()
{
    int a;      // taking inputs
    float b;
    cout<<"Enter number & cost of item := ";
    cin>>a>>b;
    
    item i; // object of class item
    
    i.getdata(a,b); // setting object value
    cout<<"item details are := \n";
    i.putdata();    // printing object value

    return 0;
}
