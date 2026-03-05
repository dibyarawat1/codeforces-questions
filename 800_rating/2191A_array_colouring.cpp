#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int  i = 0 ; i<n ; i++){
          cin>>v[i];
        }
       int expected_parity =  (v[0]+0)%2;
       bool possible =  true;
        for(int  i  = 1; i<n;i++){
            if((v[i]+i)%2 != expected_parity){
                possible = false;
                    break;
            }
        }
        if(possible){
            cout<<"yes"<<"\n";
        }else{
            cout<<"no"<<"\n";
        }
        t--;
    }
}