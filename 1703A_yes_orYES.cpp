#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    string str = "";
    cin>>t;
    while(t>0){
        cin>>str;
        t--;
   if((str[0]=='y'||str[0]=='Y') && (str[1]=='e'||str[1]=='E')&& (str[2]=='s' || str[2]=='S')){
       cout<<"yes"<<endl;
   }else{
       cout<<"no"<<endl;
   }
}
}