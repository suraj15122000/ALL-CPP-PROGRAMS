# include<iostream>
# include<bits/stdc++.h>
using namespace std;
void print(list<int> &l){
    list<int >:: iterator it;
     for(it=l.begin();it!=l.end();it++){
            cout<<*it<<" ";
   }
}
int  main(){
    list<int>l;
   list<int>:: iterator it;
   for(int i=0;i<5;i++){
            int element;
            cin>>element;
            l.push_back(element);
   }
     print(l);
}