#include <bits/stdc++.h>
using namespace std;

/*

we can pass object as argument using pass by value as well as pass by reference.. 
It is same as passing variable by val or by ref ony we will use object variable

*/

class Time{
    int hours,minutes; 
  public:
    void gettime(int hr,int mt){
        hours=hr;
        minutes=mt;
    }
    void displaytime(){
        cout<<"\n Hours := "<<hours<<endl;
        cout<<"\n Minutes := "<<minutes<<endl;
    }
    
    void addTime(Time t1,Time t2){      // function taking object of class as argument to do calculations
        minutes=t1.minutes+t2.minutes;          // adding t1 + t2 to get resultant time in minutes & hours
        hours=minutes/60;
        minutes=minutes%60;
        hours=hours+t1.hours+t2.hours;
    }
    
};

int main()
{
    Time t1,t2,t3;      // creating 3 object of Time
    
    t1.gettime(2,45);       //this will obj t1 as set t1.hours=2 && t1.minutes=45; using function
    t2.gettime(3,35);
    t3.addTime(t1,t2);      // t3=t1+t2  i.e set t3.minutes & t3.hours with addTime function
    
    t1.displaytime();
    t2.displaytime();
    t3.displaytime();
    return 0;
}
