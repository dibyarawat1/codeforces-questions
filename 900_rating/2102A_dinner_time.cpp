#include<iostream>
using namespace std;
void solve(){
    int n , m , p , q;
    cin>>n>>m>>p>>q;
    if(n%p!=0){
        cout<<"yes"<<"\n";
    }else{
        if((n/p)*q==m){
            cout<<"yes"<<"\n";
        }else{
            cout<<"no"<<"\n";
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t>0){
    solve();
    t--;
}
}