# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int countDigit(int n){
    int cnt=0;
    while(n){
        cnt++;
        n=n/10;
    }
    return cnt;
}
bool armstrong(int n){
   int noOfdigit=countDigit(n);
   int temp=n;
   int sum=0;
   while(n!=0){
    int rem=n%10;
    sum=sum+pow(rem,noOfdigit);
    n/=10;
   // cout<<sum<<" ";
   }
  // cout<<sum<<endl;
   return sum==temp;
}
int main() {
  int n;
  cin>>n;
  cout<<boolalpha<<armstrong(n)<<endl;


}