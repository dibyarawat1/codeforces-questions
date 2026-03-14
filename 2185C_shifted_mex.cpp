#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void solve(){
    int n;
    cin>>n;
        vector<int> v(n);
        for(int  i = 0 ;i<n ;i++){
            cin>>v[i];
        }
        if(v.empty()){
            cout<<"0"<<"\n";
            return;
        }
         sort(v.begin(),v.end());
       v.erase(unique(v.begin(),v.end()),v.end());
       int max_len = 1;
       int current_len = 1;
       for(int  i = 1 ;i<v.size();i++){
        if(v[i]==v[i-1]+1){
            current_len++;
        }else{
            current_len = 1;
        }
        max_len = max(max_len,current_len);
       }
       cout<<max_len<<"\n";
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