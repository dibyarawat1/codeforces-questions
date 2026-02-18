#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,a;
    cin>>n;
    while(n>0){
        cin>>a;
        if(a==1){
            cout<<"HARD";
            return 0;
        }
        n--;
    }
    cout<<"EASY";
}