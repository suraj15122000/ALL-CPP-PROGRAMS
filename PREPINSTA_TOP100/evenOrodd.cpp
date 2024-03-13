# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin>>n;
  int digit=n&1;
  if(digit)
  cout<<n<<" is odd no.";
  else
  cout<<n<<" is even no.";
  return 0;
}