# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int main() {
     int a,b,c;
     cin>>a>>b>>c;
     if((a>=b) && (a>=c)){
        cout<<a<<" is greatest."<<endl;
     }
     else if(b>=a && b>=c){
        cout<<b<<" is greatest."<<endl;
     }
     else{
        cout<<c<<" is greatest.";
     }
}