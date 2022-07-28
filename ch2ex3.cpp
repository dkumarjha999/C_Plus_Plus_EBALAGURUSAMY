
#include <bits/stdc++.h>
using namespace std;

class Person{
    char name[30];
    int age;
    float marks;
    
    public:
        void getdata();
        void printdata();
};

void Person:: getdata(){
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter age: ";
    cin>>age;
    cout<<"Enter marks: ";
    cin>>marks;
    
}


void Person:: printdata(){
    cout<<"\nName: "<<name;
    cout<<"\nAge: "<<age;
    cout<<"\nmarks: "<<marks;
    
}


int main()
{
    Person p;
    p.getdata();
    p.printdata();
    return 0;
    
        /*  
        descriptions
        
        Here Person is a class with data member-->which is variable to hold values are-->name,age,marks
        
        and member functions are--> getdata & printdata which is used for data member modification which
        include input,output and other calculations
        
       in main Person p; -->Here P is object of class Person i.e p is one copy of Person with its seperate
       data member and member function  name,age,marks getdata & printdata
       
       
       similarly we can create other object Person p2 then it will be another copy of Person class
       
       
       that is why object is also called instace or variable or blue print of a class
    
    */
    
}
