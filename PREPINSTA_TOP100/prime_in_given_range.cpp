# include<iostream>
# include<bits/stdc++.h>
using namespace std;
bool primeOrnot(int n){
    int cnt=0;
    if(n==0 || n==1)
    return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cnt++;
        }
    }
    if(cnt)
    return false;
    else
    return true;
}
int main() {
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(primeOrnot(i)){
            cout<<i<<" ";
        }
    }
}