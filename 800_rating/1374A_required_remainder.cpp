#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int x,y,n;
        cin>>x>>y>>n;
        int k = ((n-y)/x)*x+y;
        cout<<k<<"\n";
        t--;
    }
}