#include <bits/stdc++.h>
using namespace std;

class M{
    int x,y;
    
  public:
    void setData(int a,int b){
        x=a;
        y=b;
    }
    
    void showData(){
        cout<<"values are : "<<x<<" , "<<y<<endl;
    }
    friend int addValues(M m);
};

    int aaddValues(M m){    // passing object of M as parameter
        int M::* px=&M::x;
        int M::* py=&M::y;
        M *pm=&m;
        int s=m.*px+pm->*py;        // accessing values of x,y with data pointer & obj pointer
        return s;
    }

int main()
{
    cout<<"Enter x,y for 2 numbers :\n";
    int x,y;
    cin>>x>>y;
    M n;
    
    void (M::*pf)(int,int)=&M::setData; // *pf has address of setData() function i.e pointer to function
    n.*pf(x,y);  // setData() function call
    n.showData();
    cout<<"Sum using function pointer of Numbers is : "<<addValues(n)<<endl;
    
    M *op=&n; // pointer to object
    
    (op->*pf)(x,y); //// setData() function call using object pointer & function pointer
    
    cout<<"Sum using using object pointer & function pointer of Numbers is : "<<addValues(n)<<endl;
    return 0;
}
