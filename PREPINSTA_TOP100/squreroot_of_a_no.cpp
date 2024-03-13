# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int main() {
   int n;
   cin>>n;
   if(floor(sqrt(n))==ceil(sqrt(n)))
   cout<<n<<" is a perfect square no. ";
   else
   cout<<n<<" is not a perfect square number .";
   return 0;
}