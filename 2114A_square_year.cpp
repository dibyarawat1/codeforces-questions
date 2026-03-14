#include<iostream>
#include<string>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int a = s[0] - '0';
    int b = (a*10) + (s[1] - '0');
    int c = (b*10) + (s[2] - '0');
    int d = (c*10) + (s[3] - '0');
    for(int  i = 0 ; i*i <= d ; i++){
        for(int   j = 0 ; j*j <= d ; j++){
            if(((i+j)*(i+j))==d){
                cout<<i<<" "<<j<<endl;
                return ;
            }
        }
    }
    cout<<"-1"<<endl;
    return ;
}
int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(0);
   int t;
   cin>>t;
   while(t>0){
    solve();
    t--;
   }
}