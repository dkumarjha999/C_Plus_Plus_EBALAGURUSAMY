#include <bits/stdc++.h>
using namespace std;

void readAndPrintMatrix(int m=2){   // setting row as optional parameter
    int n;
    cout<<"Enter no of column in matrix := ";
    cin>>n;
    char rowchar;
    cout<<"row is optional do you want to enter ? Y:N enter Y for yes and N for no :=";
    cin>>rowchar;
    if(rowchar=='Y'){
        cout<<"Enter no of rows in matrix := ";
        cin>>m;     // setting row if user wants to enter 
    }
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
