#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool leap(int year){
    if((year%400==0) || (year%4==0 && year%100!=0)){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
   int month,year;
   cout<<"Enter months ans year : "<<endl;
   cin>>month>>year;
   int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};
   
   if(month==2){
    if(leap(year)){
        cout<<"No of days in "<<month<<" is : "<<arr[month-1]+1<<endl;
    }
    else{
        cout<<"No of days in "<<month<<" is : "<<arr[month-1]<<endl;
    }
   }
   else{
     cout<<"No of days in "<<month<<" is : "<<arr[month-1]<<endl;
   }
}