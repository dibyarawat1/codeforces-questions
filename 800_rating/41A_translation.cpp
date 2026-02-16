#include<iostream>
#include<string>
using namespace std;
  int main(){
      ios::sync_with_stdio(false);
      cin.tie(0);
    string s1,s2;
    cin>>s1>>s2;
    if(s1.size()!=s2.size()){
        cout<<"NO";
        return 0;
    }
    for(int i = 0 ; i < s1.size() ; i++){
       if( s1[s1.size()-i-1] != s2[i]){
           cout<<"NO";
           return 0;
       }
    }
    cout<<"YES";
    return 0;
}