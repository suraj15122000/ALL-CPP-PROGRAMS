#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int po(int base, int pow){
    if(pow==0)
    return 1;
    return base*po(base,pow-1);
}
int main()
{
  int base;
  int pow;
  cin>>base>>pow;
  int ans=po(base,pow);
  cout<<ans;
}