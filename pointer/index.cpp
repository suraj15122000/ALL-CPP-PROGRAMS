#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//   void update(int *p){
//         *p=*p+1;
//         cout<<*p<<"inside"<<endl;
//     }

int main()
{ 
    // int a=10;
    // int *p=&a;
    // *p=20;
    // cout<<*p<<endl;
    // cout<<a<<endl;

    // double d=10.3;
    // double *ptr=&d;
    // // cout<<a<<endl;
    // // cout<<*p<<endl;
    // // cout<<&a<<endl;
    // // cout<<p<<endl;
    // //   cout<<&p<<endl;

    // cout<<sizeof(a)<<endl;
    // cout<<sizeof(*p)<<endl;
    // cout<<sizeof(p)<<endl;
    // cout<<sizeof(d)<<endl;
    // cout<<sizeof(*ptr)<<endl;
    // cout<<sizeof(ptr)<<endl; 
// int c=10;
// int *q;
// q=&c;
// cout<<&q<<endl;
// cout<<*q<<endl;
// cout<<q<<endl;

// int d=10;
// int *p=&d;
// *p=7;
// cout<<*p<<endl<<d;
// int a[] = {1, 2, 3, 4};
// cout << *(a) << " " << *(a+1);
// int a=9;
// int *p=&a;
// *p=67;
// cout<<*p<<" "<<p<<" "<<a<<endl;
// int arr[5]={1,2,3,4,5};
// int *p=&arr[0];
// cout<<p<<endl;
// cout<<*p<<" "<<endl;
// cout<<&arr[0]<<endl;
// cout<<arr<<endl;
//cout<<arr[0]<<endl;
    // char ch[5]="sura";
    // cout<<ch<<endl;
    // char *c=&ch[0];
    // cout<<c<<endl;
    // cout<<*c<<endl;
    // char chh='s';
    // char *p=&chh;
    // cout<<"kuch kuch"<<p<<endl;
    // cout<<"s->"<<chh<<endl;
    // cout<<"same"<<*p<<endl;
    // cout<<p<<endl;
    // cout<<&chh<<endl;
  
    // int a=7;
    // int *p=&a;
    // cout<<*p<<endl;
    // update(p);
    // cout<<"After"<<*p<<endl;
    // int arr[]={211,2,8};
    // int *pq=arr;
    // cout<<*pq<<endl;
    // cout<<sizeof(pq)<<endl;
    // cout<<sizeof(arr)<<endl;
//      int arri[] = {1, 2 ,3}; 
//     int *ptri = arri; 
  
//     char arrc[] = {1, 2 ,3}; 
//     char *ptrc = arrc; 
  
//     printf("sizeof arri[] = %d ", sizeof(arri)); 
//     cout<<endl;
//     printf("sizeof ptri = %d ", sizeof(ptri)); 
//   cout<<endl;
//     printf("sizeof arrc[] = %d ", sizeof(arrc)); 
//     cout<<endl;
//     printf("sizeof ptrc = %d ", sizeof(ptrc)); 
// int arr[5]={2,4,78,4,69};
// int *p=arr;
// int *q=arr+9;
// cout<<p<<" "<<q<<endl;
// cout<<q-p<<endl;
// char *pw=\"suraj\";
// cout<<*pw;
// char *ptr = \"GeeksQuiz\";
//  printf(\"%c", *&*&*ptr);
  
// int arr[20]={1,3,4,5,67};
// int cap=sizeof(arr)/sizeof(arr[0]);
// cout<<cap;
// int insert(int arr, int n,int key){
//     for(int i=n-1;i>=0 && arr[i]>key)
// }
// int arr[20]={[0 ... 19]= -1};
// for(int i=0;i<20;i++){
//     cout<<arr[i]<<" ";
// }

// char ch[4]={'a','b','c','d'};
// cout<<ch<<endl;
// ch[1]='\0';
// cout<<ch<<endl;
// string str="suraj";
// cout<<str<<endl;
//  str[2]='\0';
// cout<<str;
// int arr[5]={1,3,5,6,7};
// int temp=arr[0];
// int n=5;
// for(int i=0;i<n-1;i++){
//     if(i<=n)
//       arr[i]=arr[i+1];
// }
// arr[n-1]=temp;
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }

// int a=10;
// cout<<a<<endl;
// doSome(a);
// cout<<a<<endl;
// pair<int, pair<int, int>> p={23,{1,4}};
// cout<<p.first<<endl<<p.second.first<<endl<<p.second.second;
vector<int>v(5,1);
// for(auto it:v){
//     cin>>v[it];
// }
// for ( auto element : v){
//     cout<<element;
// }
 int arr[] = {5, 2, 8, 1, 6};

    // Creating a priority queue and copying data from the array
   priority_queue<int>p;
   for(int i=0;i<5;i++){
    p.emplace(arr[i]);
   }

    // Displaying the elements in the priority queue
    cout << "Priority Queue elements: ";
    while (!p.empty()) {
        cout << p.top() << " ";
        p.pop();


        



        
    }








}