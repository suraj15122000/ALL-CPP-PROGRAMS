# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int main() {
   char ch;
   cin>>ch;
   if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
    cout<<ch<<" is a alphabet. "<<endl;
   }
   else
   cout<<ch<<" is not a alphabet."<<endl;
   return 0;
}