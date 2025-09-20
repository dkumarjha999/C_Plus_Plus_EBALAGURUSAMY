#include <bits/stdc++.h>
using namespace std;

class  Largest{
  int a,b;           // if nothing is written by default it is private
  
  public:
    void getdata(){
        cout<<"Enter 2 numbers := ";
        cin>>a>>b;
    }
    int largest(){
        if(a>b) return a;
        else return b;
    }
    void putdata(){     
        cout<<"largest of := "<<a<<" , "<<b<<" is := "<<largest()<<endl;        // calling one function inside other is called nesting of functions
    }
};


int main()
{
    Largest s;
    s.getdata();
    s.putdata();
    return 0;
}
