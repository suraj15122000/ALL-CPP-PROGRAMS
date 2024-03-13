# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int convert(string str){
    int len=str.size();
    int i=0;
    int ans=0;
    for(int j=len-1;j>=0;j--){
        if(str[j]>='0' && str[j]<='9'){
            int digit=int (str[j]-48);
            ans=ans+(pow(16,i)*digit);
            i++;

        }
        else if(str[j]>='A' && str[j]<='F'){
            int digit=int (str[j]-55);
            ans=ans+(pow(16,i)*digit);
            i++;

        }
    }
    return ans;
}
int main() {
  string str;
  cin>>str;
  cout<<"No in decimal is "<<convert(str);

}