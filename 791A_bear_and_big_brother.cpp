#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int l,b;
    cin>>l>>b;
    int count=0;
    while(l<=b){
        count++;
        l = l*3;
        b = b*2;
    }
    cout<<count;
}