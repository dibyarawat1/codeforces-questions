#include<iostream>
using namespace std;
inline void solve(){
    int n;
    cin>>n;
    int zeros = 0 , ne = 0 , val;
    while(n--){
        cin>>val;
        if(val == 0){
            zeros++;
        }else if(val == -1){
            ne++;
        }
    }
    cout<<zeros+((ne & 1)<<1)<<"\n";
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