# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int sumOfdivisor(int n){
    int ans=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            ans=ans+i;
        }
    }
    return ans;
}
int main() {
  int n;
  cin>>n;
  int temp=sumOfdivisor(n);
  if(temp==n)
  cout<<n<<" is perfect no. ";
  else
  cout<<n<<" is not a perfect no. ";

}