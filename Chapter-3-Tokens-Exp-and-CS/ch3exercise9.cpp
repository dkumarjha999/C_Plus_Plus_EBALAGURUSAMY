#include <bits/stdc++.h>
using namespace std;

double findMean(double sum,int n){
    return double(sum)/n;
}

double findVariance(double mean, vector<float>&ar,int n){   // get Variance of data
    double sqsum=0;
    for(int i=0;i<n;i++){
        sqsum+=pow(ar[i]-mean,2);
    }
    return double(sqsum)/n;
}

int main()
{
    int n;
    cout<<"Enter no of data term := ";
    cin>>n;
    vector<float>ar(n);
    float tmp;
    double sum=0;
    for(int i=0;i<n;i++){      // entering data
        cin>>tmp;
        sum+=tmp;
        ar[i]=tmp;
    }
    double Mean=findMean(sum,n);
    double Variance=findVariance(Mean,ar,n);
    cout<<"Mean =: "<<Mean<<endl;
    cout<<"Variance =: "<<Variance<<endl;
    cout<<"Standard Deviation =: "<<sqrt(Variance)<<endl;
}
