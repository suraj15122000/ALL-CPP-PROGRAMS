# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int LCM(int a, int b, int maxi){
    while(1){
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
int ans=LCM(n,m,maxi);
cout<<"LCM of "<<n<<" and "<<m<<" is "<<ans<<endl;

}