#include <bits/stdc++.h>

using namespace std;

class TestPlayer{
    string name;
    int runs;
    int innings;
    int timesNotOut;
    float average;
    public:
        void setData(string playerName,int run,int inning, int notOut){   // setting player details
            name=playerName;
            runs=run;
            innings=inning;
            timesNotOut=notOut;
            average=float(run)/inning;  // calculating average for data conversion float(run) to calculate correct average
        }
        
        void printData(){ // printing players etails
            cout<<"player name=: "<<name<<"\truns scored=: "<<"\tinnings=: "<<innings<<"\ttimes not out=: "<<timesNotOut<<"\taverage=: "<<average<<endl;
        }
};

int main()
{
    int n;
    cout<<"Enter no of players := ";
    cin>>n;
    string playerName;
    int run,inning, notOut;
    TestPlayer players[n];    // object for n players
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i+1<<" players name, runs, innings, timesNotOut =: "<<endl;
        cin>>playerName>>run>>inning>>notOut;       // input players details
        players[i].setData(playerName,run,inning,notOut); // setting ith players data
    }
    
    cout<<"Players details are:= \n";
    for(int i=0;i<n;i++){
        players[i].printData(); // printing ith players data
    }
    
    return 0;
}
