
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}
int main()
{
 int students;
 int sits;
 cin>>students>>sits;
 int num=fact(students);
 int denum=fact(students-sits);
 int ans=num/denum;
 cout<<"purmutation is "<<ans;

}