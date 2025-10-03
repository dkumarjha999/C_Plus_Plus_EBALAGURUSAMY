#include<bits/stdc++.h>
using namespace std;

class DB;

class DM{
    int meter;
    int centimeter;
    public:
        void setDM(int m,int cm){
            meter=m;
            centimeter=cm;
        }

        void showDM(){
            cout<<meter<<" meter and "<<centimeter<<" centimeter"<<endl;
        }
  
        friend DM addToDM(const DB &d, const DM &m);
        friend DB addToDB(const DB &d, const DM &m);
};

class DB{
    int feet;
    int inch;
    public:
        void setDB(int f,int in){
            feet=f;
            inch=in;
        }

        void showDB(){
            cout<<feet<<" feet and "<<inch<<" inch"<<endl;
        }

        friend DM addToDM(const DB &d, const DM &m);
        friend DB addToDB(const DB &d, const DM &m);
};

DM addToDM(const DB &d, const DM &m){
    DM res;
    double totalInches = d.feet * 12.0 + d.inch;
    long totalCm = lround(totalInches * 2.54) + (m.meter * 100 + m.centimeter);
    res.setDM(int(totalCm / 100), int(totalCm % 100));
    return res;
}

DB addToDB(const DB &d, const DM &m){
    DB res;
    long totalCm = m.meter * 100 + m.centimeter;
    long totalInches = lround(totalCm / 2.54) + (d.feet * 12 + d.inch);
    res.setDB(int(totalInches / 12), int(totalInches % 12));
    return res;
}

int main(){
    DB d;
    DM m;
    int f,in,mtr,cm;
    cout<<"Enter feet and inch for DB object: ";
    cin>>f>>in;
    d.setDB(f,in);
    cout<<"Enter meter and centimeter for DM object: ";
    cin>>mtr>>cm;
    m.setDM(mtr,cm);
    cout<<"\nDB object is : ";
    d.showDB();
    cout<<"\nDM object is : ";
    m.showDM();
    cout<<"\nAdding DM object to DB object gives : \n";
    DM resDM=addToDM(d,m);
    resDM.showDM();
    cout<<"\nAdding DB object to DM object gives : \n";
    DB resDB=addToDB(d,m);
    resDB.showDB();
    return 0;
}