# include<iostream>
# include<bits/stdc++.h>
using namespace std;
void print(stack<int>s){
    while(!s.empty()){
    int ans=s.top();
    cout<<ans<<" ";
    s.pop();
  }
}
int main() {
  stack<int>st;
  st.push(5);
   st.push(37);
    st.push(38);
     st.push(58);
     print(st);
}