
#include <bits/stdc++.h>
using namespace std;

void readAndPrintMatrix(){
    int m,n;
    cout<<"Enter no of rows and column in matrix := ";
    cin>>m>>n;
    int ar[m][n];
    int tmp;
    cout<<"Enter "<<m*n<<" element in matrix := \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>tmp;
            ar[i][j]=tmp;
        }
    }
    
    cout<<"Element in matrix := \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }
    
}


int main()
{
    readAndPrintMatrix();
    return 0;
}
