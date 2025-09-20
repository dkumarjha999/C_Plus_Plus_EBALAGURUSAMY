#include <bits/stdc++.h>

using namespace std;

float getCelsius(float f){    //getCelsius is a function which return float value and accept input as float value
    float c=((f-32)*5)/9;
    return c;
}


int main()
{
    float f,c;
    cout<<"Enter temperature in fahrenheit: ";
    cin>>f;
    c=getCelsius(f);
    cout<<"temperature in celsius="<<c<<endl;
  
  
  // converting fahrenheit into celsius using function 
  
  /*
   we use function for doing some calculation seoparetely which takes input (inside this) an return type before function name
   and between the parenthesis it does calculations that is 
   
   float getCelsius(float f)
   --> return type is float 
   
   --> function name is getCelsius
   
    -->takes input (inside this)--> float f which is called input parameter
  
  */
    return 0;
}
