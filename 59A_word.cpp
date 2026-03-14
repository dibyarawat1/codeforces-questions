#include<iostream>
#include<string>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string sc;
    cin>>sc;
    int count1=0, count2=0;
    for(int i =0 ; i < sc.size() ; i++){
        if(sc[i] >=97 && sc[i]<= 122){
            count1++;
        } else{
            count2++;
        }
    }
    for(int i=0 ; i < sc.size();i++){
    if(count2 > count1){
        sc[i] &= '_';
    }else{
        sc[i] |= ' ';
    }
}
    for(int i=0; i< sc.size(); i++){
        cout<<sc[i];
    }
}