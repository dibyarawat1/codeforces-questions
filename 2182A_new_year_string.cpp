#include<iostream>
#include<string>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
   cin>>s;
   bool y =true;
   for(int i = 0 ;i<n-3 ;i++){
       if(s[i]=='2'){
           if(s[i+1]=='0'){
               if(s[i+2]=='2'){
                   if(s[i+3]=='6'){
                       cout<<"0"<<"\n";
                       return;
                   }
                   else{
                       if(s[i+3]=='5'){
                           y = false;
                       }
               }
           }
       }
   }
}
if(y==false){
    cout<<"1"<<"\n";
    return;
}
else{
    cout<<"0"<<"\n";
    return;
}
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t>0){
        solve();
        t--;
    }
    
}