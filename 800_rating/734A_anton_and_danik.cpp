#include<iostream>
using namespace std;
int main(){
    int n;
    string sc;
    cin>>n>>sc;
    int a=0,d=0;
    for(int i=0;i < n; i++){
        if(sc[i]=='A'){
            a++;
        }else if(sc[i] == 'D'){
            d++;
        }
    }
    if(a>d){
        cout<<"Anton";
    }else if(a<d){
        cout<<"Danik";
    }else{
        cout<<"Friendship";
    }
}