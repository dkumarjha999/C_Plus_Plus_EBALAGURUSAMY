
#include <bits/stdc++.h>
using namespace std;

class Sample{
    int a,b; 
  public:
    void setVal(int x,int y){
        a=x;
        b=y;
    }
    friend float getMean(Sample s); // friend function to access class data as object argument is passes
};

float getMean(Sample s){        // defining friend function
        return (float(s.a)+float(s.b))/2;
    }

int main()
{
    Sample x;
    x.setVal(5,6);  // setting object s values
    cout<<"mean := "<<getMean(x)<<endl; // calling function
    return 0;
}
