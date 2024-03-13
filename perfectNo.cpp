# include<iostream>
# include<bits/stdc++.h>
using namespace std;
long long factorSum(long long n){
      long long ans=0;
    for(long long i=1;i<n;i++){
        if(n%i==0)
        ans=ans+i;
    }
    return ans;
      
  }
    int isPerfectNumber(long long N) {
        long long factsum=factorSum(N);
        if(factsum==N)
        return 1;
        else
        return 0;
    }
int main() {
   int n=6;
      int ans=isPerfectNumber(n);
      cout<<ans;
}