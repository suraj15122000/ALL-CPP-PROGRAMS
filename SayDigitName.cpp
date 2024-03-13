# include<iostream>
using namespace std;
void Digitsay(int n, string arr[]){
    if(n==0)
    return;

    int digit=n%10;
      n/=10;
       Digitsay(n , arr);
    cout<<arr[digit]<<" ";
  

   
    
}
int main(){
    int n;
    cin>>n;
    string arr[10]={"zero","one","two","three","four",
                    "five","six","seven","eight","nine"};

    Digitsay(n,arr);


}