#include <bits/stdc++.h>
using namespace std;
const int m=50;             // delcaring a global constant for maxm 50 items;

class Item{
  int count;
  int itemCode[m];           // if nothing is written by default it is private
  float itemCost[m];
  public:
    void setCount(){count=0;}       // function for setting count of item =0
    void getitem(){
        cout<<"Enter itemCode := ";
        cin>>itemCode[count];
        cout<<"\nEnter itemCost := ";
        cin>>itemCost[count];
        count++;
    }
    void displaySum(){
        float sum=0;
        for(int i=0;i<count;i++){
            sum+=itemCost[i];
        }
        cout<<"\n Total cost := "<<sum<<endl;
    }
    
    
    void removeItem(){
        int code;
        cout<<"Enter itemCode :=";
        cin>>code;
        for(int i=0;i<code;i++){
            if(code==itemCode[i]){
                itemCost[i]=0;
            }
        }
    }
    
    void displayItems(){
        cout<<"itemCode\titemCost\n";
        for(int i=0;i<count;i++){
            cout<<itemCode[i]<<"\t\t"<<itemCost[i]<<endl;
        }
    }
};


int main()
{
    Item orders;    // object of item class
    orders.setCount();  // setting count =0;
    int x;
    do{
      cout<<"You can do the following\n";
      cout<<"1: for Add an item\n";
      cout<<"2: for Display total\n";
      cout<<"3: for Delete an item\n";
      cout<<"4: for Display all items\n";
      cout<<"5: for Quit\n";
      cout<<"Enter your option : ";
      cin>>x;
      switch(x){
          case 1:{
              orders.getitem();
              break;
          }
          case 2:{
              orders.displaySum();
              break;
          }
          case 3:{
              orders.removeItem();
              break;
          }
          case 4:{
              orders.displayItems();
              break;
          }
          case 5: break;
          
          default: cout<<"Invalid Option selection| try with correct options\n";
      }
    }while(x!=5);
    return 0;
}
