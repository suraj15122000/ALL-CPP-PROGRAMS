#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int power(int num, int po){
    if(po==0)
    return 1;
    return num*power(num,po-1);
}
int main()
{
  int num;
  int po;
  cin>>num>>po;
  int ans=power(num,po);
  cout<<ans;
}