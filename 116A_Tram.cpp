#include<iostream>
using namespace std;
int main(){
    int n,a,b;
    int sum=0;
    int min=0;
    cin>>n;
    while(n>0){
        cin>>a>>b;
       sum = sum-a;
       sum = sum+b;
       if(sum>min){
           min= sum;
       }
        n--;
    }
    cout<<min<<endl;
}