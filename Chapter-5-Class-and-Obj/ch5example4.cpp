/*

static variable belongs to class not to object ... we can understand it as class variable or parent or global type variable 
& its copy is share to all object which contains same address so based on condition its value can be found... 
if it got increment by n. its value will will get incremented by n for all copy of object at that time and same for other like -, *, / 

it has global scope & we can even get it using classname::variable name if it is public..
but when it is private we can access with member function only
*/


#include <bits/stdc++.h>
using namespace std;

class Item{
  static int count;
  int number;           // if nothing is written by default it is private
 
  public:
    void getdata(int a){
        number=a;
        count++;
    }
    void displaydata(){
        cout<<"\n number := "<<number<<endl;
        cout<<"\n count := "<<count<<endl;
    }
    
};

int Item::count;      // defining static data member by default it takes value as 0   if we want we can assign the value as int Item::count=10;

int main()
{
    Item a,b,c;
    a.displaydata();     // in 3 cases static variable is having default value 0 but number is not seted so any garbadge value
    b.displaydata();
    c.displaydata();
    
    a.getdata(100);     // setting a.number =100 & incrementing the static variable
    b.getdata(200);
    c.getdata(300);
    
    cout<<"\n After reading data := "<<endl;
    a.displaydata();  // printing object value of number =100 & static count as 3
    b.displaydata();  // printing object value of number =200 & static count as 3
    c.displaydata();  // printing object value of number =300 & static count as 3
    return 0;
}
