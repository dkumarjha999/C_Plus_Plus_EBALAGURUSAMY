
#include <bits/stdc++.h>
using namespace std;

class Employee{
    char name[30];
    int age; 
  public:
    void getdata(){
        cout<<"\n Enter Name := "<<endl;
        cin>>name;
        cout<<"\n Enter Age := "<<endl;
        cin>>age;
    }
    void displaydata(){
        cout<<"\n Name := "<<name<<endl;
        cout<<"\n Age := "<<age<<endl;
    }
    
};

int main()
{
    int n;
    cout<<"Enter Number of Employee :=";
    cin>>n;
    Employee emp[n];    // created n emp of type Employee   i.e.. array of object of employee
    cout<<"\nEnter "<<n<<" Employee details"<<endl;
    for (int i=0;i<n;i++) {   // input details of n emp obj
        emp[i].getdata();
    }
    
    cout<<n<<" Employee details"<<endl;   // show details of n emp obj
    for (int i=0;i<n;i++) {
        emp[i].displaydata();
    }
    return 0;
}
