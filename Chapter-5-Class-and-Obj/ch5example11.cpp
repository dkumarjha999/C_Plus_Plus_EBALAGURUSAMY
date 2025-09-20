

#include <bits/stdc++.h>
using namespace std;

class Complex{
  float x,y;
  public:
    void setData(float real,float img){
        x=real;
        y=img;
    }
    
    void showData(){
        cout<<x<<" + j "<<y<<endl;
    }
    friend Complex addComplex(Complex a,Complex b);
};

    Complex addComplex(Complex a,Complex b){    // passing object of Complex as parameter
        Complex c;
        c.x=a.x+b.x;        // calculating & assigning value to new object c
        c.y=a.y+b.y;
        return c;
    }

int main()
{
    cout<<"Enter x,y for 2 Complex numbers :\n";
    float x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    Complex c1,c2,c3;
    c1.setData(x1,y1);
    c2.setData(x2,y2);
    cout<<"Entered Complex numbers are :\n";
    c1.showData();
    c2.showData();
    cout<<"Sum of complex Number is :\n";
    c3=addComplex(c1,c2);       // calling sum function
    c3.showData();
    return 0;
}
