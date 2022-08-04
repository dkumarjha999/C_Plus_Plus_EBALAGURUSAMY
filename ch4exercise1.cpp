
#include <bits/stdc++.h>
using namespace std;

void readMatrix(){
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
}


int main()
{
    readMatrix();
    return 0;
}
