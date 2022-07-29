
#include <bits/stdc++.h>

using namespace std;

class temp{
     float f;
    public:
        void setf(float fahrenheit){
            f=fahrenheit;
        }
        float getCelsius(){
        float c=((f-32)*5)/9;
        return c;
        }
};




int main()
{
    float f,c;
    cout<<"Enter temperature in fahrenheit: ";
    cin>>f;
    temp tmp;
    tmp.setf(f);
    c=tmp.getCelsius();
    cout<<"temperature in celsius: = "<<c<<endl;
    return 0;
  
  /*
  
  fahrenheit to celsius using class and function
  
  */
}
