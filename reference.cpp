#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void ref(int & x, int &y){
   int temp=x;
    x=y;
    y=temp;
    
}
int main()
{
  int a=10;
  int b=20;
  ref(a,b);
  cout<<a<<endl<<b<<endl;
  int x=10;
  int &y=x;
  cout<<&y<<endl;
  y++;
  cout<<y;
  int i=10;
  for(int i=0;i<5;i++){
    cout<<i<<" ";
  }
  cout<<" "<<i;

}