#include<iostream>
using namespace std;
void solve(){
    int n,s,x,num;
    cin>>n>>s>>x;
    int sum = 0;
    for(int  i = 0 ; i< n ; i++){
        cin>>num;
        sum = sum + num;
    }
    if(sum == s){
        cout<<"yes"<<endl;
    }else if(sum > s){
        cout<<"no"<<endl;
    }else if((s-sum)%x==0){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        solve();
        t--;
    }
}