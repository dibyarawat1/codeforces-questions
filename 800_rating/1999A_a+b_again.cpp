#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t,n;
    int sum =0;
    cin>>t;
    while(t>0){
        sum = 0;
        cin>>n;
        while(n!=0){
            int ans = n%10;
            sum = sum + ans;
            n = n/10;
        }
         cout<<sum<<endl;
        t--;
    }
}