# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int main() {
  char ch;
  cin>>ch;
  if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
    if((ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') || 
    (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')){
        cout<<ch<<" is a vowel."<<endl;
    }
    else
    cout<<ch<<" is constant. "<<endl;
  }
  else
  cout<<ch<<" is not a alphabet. "<<endl;
}