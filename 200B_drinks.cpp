#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    double n;
    double p;
    cin>>n;
     double  a=n;
    double sum=0;
    while(n){
      cin>>p;
      sum+=p;
      n--;
    }
   cout<<sum/a;
}