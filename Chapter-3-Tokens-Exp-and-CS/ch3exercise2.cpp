
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter a number for array size\n";
    cin>>n;
    int *ar=new int[n];     // way 1
    vector<int>*vec=new vector<int>(n);     // way 2
    cout<<"Enter "<<n<<" number for array\n";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ar[i]=x;
        vec->push_back(x);
    }
    for(int i=0;i<n;i++)cout<<ar[i]<<" ";
    cout<<endl;
    
    for(int i=0;i<n;i++)cout<<ar[i]<<" ";
    cout<<endl;
    return 0;
}
