#include<iostream>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    int sum=0;
    int a;
    for(int i= 1 ; i<=n; i++){
        cin>>a;
        if(a > k){
            sum += 2;
        }else{
            sum += 1;
        }
    }
    cout<<sum;
}