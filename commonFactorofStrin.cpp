# include<iostream>
#include <algorithm>
# include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b ){
    int mini=(a<b) ? a : b;
    while(mini>0){
        if(a % mini==0 && b % mini==0){
              break;
        }
          
         mini--;   
    }
    return mini;
}
string subString(string str1, string str2){
   int l1=str1.size();
   int l2=str2.size();
   if(str1+str2 == str1+str2){
    return str1.substr(0,gcd(l1,l2));
   }
   return "";
}
int main() {
   string str1="ABCABC";
   string str2="ABC";
   string ans="";
    ans=subString(str1,str2);
    cout<<ans;
  
}