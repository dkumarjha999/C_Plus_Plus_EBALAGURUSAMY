
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter three numbers\n";
    cin>>a>>b>>c;
    int x=b-c;
    if(x==0){
        cout<<"Error\n Division by Zero\n";
    }else{
        float res=(float)a/x;         // (float)a   --> will convert int a to float a this is called explicit type conversion
        cout<<"ans="<<res<<endl;
    }
/*

taking 3 numbers a,b,c as input and dividing a by b-c

checking if b-c is 0 it means we can't divide 

otherwise we are dividing to get result

(float)a  we are using so that we will get exact division ans if we want integer answer then no need to do type conversion

*/  
  
    return 0;
}
