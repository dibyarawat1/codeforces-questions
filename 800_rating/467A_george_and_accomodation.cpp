#include<iostream>
using namespace std;
int main(){
    int n , p, q;
    cin>>n;
    int count=0;
    while(n>0){
        cin>>p>>q;
        if(p<=(q-2)){
            count++;
        }
        n--;
    }
    cout<<count<<endl;
}