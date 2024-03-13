#include<iostream>
//#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,c;
  cout<<"Enter the value of cofficient of equation : "<<endl;
  cin>>a>>b>>c;
  double d=(b*b)-(4*a*c);
  double sqd=sqrt(d);
  if(d>0){
    double root1=(-b+sqd)/2*a;
    double root2=(-b-sqd)/2*a;
    cout<<"ans is "<<root1<<" "<<root2;
  }
  else if(d<0){
   double realroot=(-b)/2*a;
    double imagine=-sqd/2*a;
     cout<<"ans is "<<realroot<<" "<<imagine;
  }
  else{
    double root=(-b+sqd)/2*a;
     cout<<"ans is "<<root;
  }
}