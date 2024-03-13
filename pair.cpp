#include<iostream>
using namespace std;
int findpair(int a[],int n){
    int sumexists=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int sum=a[i]+a[j];
            for(int k=0;k<n;k++){
                if(sum==a[k]){
                    cout<<a[i]<<a[j];
                    sumexists=1;
                    break;
                }
            }
        }

    }
    if(!sumexists){
        cout<<"0"<<endl;
    }
}
int main(){
    int n,a[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    findpair(a,n);
}
