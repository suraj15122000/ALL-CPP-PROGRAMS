#include<iostream>
#include<queue>
using namespace std;
main(){
    priority_queue<int , vector<int> , greater<int>> q;
    q.push(545);
    q.push(78);
    q.push(23);
    q.push(456);
    int s =q.size();
    cout<<s;
    q.pop();
      s =q.size();
   cout<<s<<endl;
   for(int i=0;i<s;i++){
    cout<<q.top()<<" ";
    q.pop();
   }
}
