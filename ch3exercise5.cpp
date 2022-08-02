
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the vo of voters := ";
    cin>>n;
    vector<int>ballot(6,0);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>5){
            ballot[5]++;
        }else{
            ballot[--x]++;
        }
    }
    
    for(int i=0;i<5;i++){
        cout<<"candidate "<<i+1<<" got votes = "<<ballot[i]<<endl;
    }
    cout<<"spoilet ballot = "<<ballot[5]<<endl;
    
    return 0;
}
