# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int getSum(int a,int b){
    if(a>b){
        return 0;
    }
    return a+getSum(a+1,b);
}
int main() {
    int n,m;
    cin>>n>>m;
    int ans=getSum(n,m);
    cout<<ans;
    
}