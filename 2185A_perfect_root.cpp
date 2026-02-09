#include<iostream>
using namespace std;
int main(){
  int t,n;
  cin>>t;
  int i=1;
   while(t--){
    cin>>n;
    i=1;
    while(n){
      cout<<i<<" ";
      i++;
      n--;
    }
    cout<<endl;
   }
}