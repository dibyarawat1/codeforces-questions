#include"iostream"
#include"vector"
#include<algorithm>
using namespace std;
void solve (){
    long long n;
    cin>>n;
    vector<long long> v;
    long long power_10 = 10;
    for(int  k = 1 ; k<=18 ; k++){
        long long divisor = power_10 +1;
        if(n%divisor==0){
            v.push_back(n/divisor);
        }
        if(k<18){
        power_10 = power_10*10;
        }
    } 
    sort(v.begin(),v.end());
    if(v.empty()){
        cout<<"0"<<"\n";
    }else{
        cout<<v.size();
        for(long long x : v){
            cout<<" "<<x;
        }
        cout<<"\n";
    }
}
int main(){
    int t;
    cin>>t;
    while(t>0 && t--){
        solve();
    }
}
