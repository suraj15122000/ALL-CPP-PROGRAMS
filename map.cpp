# include<iostream>
# include<bits/stdc++.h>
using namespace std;
void display(map <int,int> &m){
    map<int,int>:: iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<" ";
    }
}
int main() {
      map<int,int> m;
      int arr[100]={11,22,33,77,44};
      for(int i=0;i<5;i++){
         m[arr[i]]=i;
      }
     display(m);
     cout<<endl;
     cout<<m.size();

}