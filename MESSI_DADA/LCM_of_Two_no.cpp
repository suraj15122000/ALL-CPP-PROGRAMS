# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int getLCM(int a,int b, int maxi){
    while(true){
    if(maxi%a==0 && maxi%b==0){
        return maxi;
    }
    maxi++;
    }
}
int main() {
   int n,m;
   cin>>n>>m;
   int maxi=(n>m) ? n:m;
   int ans=getLCM(n,m,maxi);
   cout<<"LCM of no. is "<<ans;

}