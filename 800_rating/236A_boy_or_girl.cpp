#include<iostream>
#include<string>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string sc;
    cin>>sc;
    int fr[26] = {0};
    int count=0;
    for(int i= 0 ; i < sc.size() ; i++){
        sc[i] = sc[i] | ' ';
       int index = sc[i] - 'a';
        fr[index]++;
    }
    for(int i = 0 ; i < 26 ; i++){
        if(fr[i]>0){
            count++;
        }
    }
    if(count%2==0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }
    
}