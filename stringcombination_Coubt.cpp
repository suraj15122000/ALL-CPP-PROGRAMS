# include<iostream>
using namespace std;
int Occurance(char ch , string s){
    int i=0;
    int temp=0;
    while(s[i]!='\0'){
        if(ch==s[i]){
            temp++;
        }
        i++;
    }
    return temp;
}
int fact(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}
int main(){
    string s="suuaj";
    int count=0;
    for(int i=0;s[i]!='\0';i++){
        count++;
    }
    int an=0;
   for(int i=0;i<count;i++){
       an=an+Occurance(s[i],s);
   }
     int numinator=fact(count);
     int denum=fact(an);
     int ans2=numinator/denum;
     cout<<ans2;

}