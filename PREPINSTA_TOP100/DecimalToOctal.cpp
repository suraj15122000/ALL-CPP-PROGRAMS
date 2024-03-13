# include<iostream>
# include<bits/stdc++.h>
using namespace std;
void convertIntoOctal(int n){
    int arr[32];
    int i=0;
    int ans=0;
    while(n){
        arr[i]=n%8;
        n=n/8;
        i++;
    }
  for(int j=i-1;j>=0;j--){
    cout<<arr[j];
  }
}
int main() {
  int n;
  cin>>n;
  convertIntoOctal(n);

}