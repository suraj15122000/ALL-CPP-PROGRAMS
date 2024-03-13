#include<iostream>
using namespace std;
int sum(int m,int n){
    int ans=0;
    for(int i=m;i<=n;i++){
        if(i%m==0){
            ans=ans+i;
        }
    }
    int ans2=0;
    for(int i=1;i<=n;i++){
        if(i%m!=0){
            ans2=ans2+i;
        }
    }
    int sum=ans2-ans;
    return sum;
}
int main(){
    int m,n;
    cin>>m>>n;
    int ans=sum(m,n);
    cout<<ans;
}