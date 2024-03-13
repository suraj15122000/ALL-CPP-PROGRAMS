# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int p;
    cin>>n>>p;
    int ans=1;
    for(int i=1;i<=p;i++){
        ans=ans*n;
    }
    cout<<"ans is "<<ans;
}