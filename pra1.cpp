# include <iostream>
# include<algorithm>
# include<bits/stdc++.h>
using namespace std;
void sorting(vector<int> v){
    sort(v.begin(), v.end());
}
void print(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int secondhighest(vector<int>v,int n){
      sorting(v);
      return v[n-2];
}

int main(){
    int n;
     cout<<"Enter the size of array. " ;
    cin>>n;
    vector<int>v(n);

    for(int i=0;i<n;i++){
        cout<<"Enter the elements at "<<i<<"th index ";
        cin>>v[i];
        cout<<endl;
    }
    sorting(v);
    cout<<endl;
    print(v);
     vector<int>even;
    cout<<"Sorted even array ";
   for(int i=0;i<n;i++){
    if(i%2==0){
      even.push_back(v[i]);
    }
   }
   print(even);
   cout<<endl;
   vector<int>odd;
    cout<<"Sorted odd array ";
   for(int i=0;i<n;i++){
    if(i%2!=0){
        odd.push_back(v[i]);
    }
   }
   print(odd);
   int ans1=secondhighest(even,even.size());
    int ans2=secondhighest(odd,odd.size());
  int sum=ans1+ans2;
  cout<<"The sum of second highest nu. in both matrixes iis "<<sum;
  

  
 
}
 
   
    
   

