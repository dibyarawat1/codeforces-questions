#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    string sc;
    cin>>sc;
    for(int  i= 0; i+1 < n ; i++ ){
        if(sc[i]==sc[i+1]){
            char temp = sc[i];
            sc[i] = sc[i+1];
            sc[i+1] = temp;
            count++;
        }
    }
    cout<<count;
}