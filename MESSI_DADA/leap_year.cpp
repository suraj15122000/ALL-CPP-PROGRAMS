# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int main() {
   int year;
   cin>>year;
   if(year%400==0){
    cout<<"year is leap ."<<endl;
   }
   else if(year%4==0 && year%100!=0){
    cout<<"year is leap ."<<endl;
   }
   else
   cout<<"year is not  leap ."<<endl;
   return 0;
}