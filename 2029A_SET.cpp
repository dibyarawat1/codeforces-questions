#include<iostream>
#include<algorithm>
using namespace std;
void solve(){
    long long  l , r, k;
    cin>>l>>r>>k;
  long long max_x = r/k;
  long long ans  = max(0LL, max_x - l +1);
  cout<<ans<<endl;
  return ;
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