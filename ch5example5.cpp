
#include <bits/stdc++.h>
using namespace std;

class Item{
    int code; 
  public: static int count;
            // if nothing is written by default it is private
 
  public:
    void getdata(int a){
        code=a;
        count++;
    }
    void displaydata(){
        cout<<"\n number := "<<code<<endl;
        cout<<"\n count := "<<count<<endl;
    }
    static void showCount(){
        cout<<"\n count := "<<count<<endl;  // static function can only access static member
    }
    
};

int Item::count=10;

int main()
{
    Item a,b,c;
    a.displaydata();
    b.displaydata();
    c.displaydata();
    
    a.getdata(100);
    b.getdata(200);
    Item::showCount();      // static function can be called with class not with object
    c.getdata(300);
    Item::showCount();
    cout<<"\n After reading data := "<<endl;
    a.displaydata();
    b.displaydata();
    c.displaydata();
    cout<<Item::count<<endl;
    return 0;
}
