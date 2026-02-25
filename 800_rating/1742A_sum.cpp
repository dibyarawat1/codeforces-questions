#include<iostream>
using namespace std;
int main(){
    int t,a,b,c;
    cin>>t;
    while(t>0){
        cin>>a>>b>>c;
        if((a+b)==c || (b+c)==a || (c+a)==b){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
        t--;
    }
}