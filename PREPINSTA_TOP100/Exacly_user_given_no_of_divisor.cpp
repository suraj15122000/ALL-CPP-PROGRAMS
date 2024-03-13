#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int noOfFactors(int n){
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cnt++;
        }
    }
    return cnt;
}
int main()
{
   int n;
   int fact;
   int ans=0;
   cout<<"Enter the no and no of factor : "<<endl;
   cin>>n>>fact;
   for(int i=1;i<=n;i++){
    if(fact==noOfFactors(i)){
        cout<<"No is "<<i<<endl;
        ans++;
    }
   }
   cout<<"total no is "<<ans;

}