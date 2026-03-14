#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    string str;
    cin>>t;
    while(t>0){
        int count1 =0;
        int count2 =0;
        cin>>str;
        for(int  i = 0 ; i<5;i++){
            if(str[i]=='A'){
                count1++;
            }else{
                count2++;
            }
        }
    if(count1>count2){
        cout<<"A"<<"\n";
    }else{
        cout<<"B"<<"\n";
    }
        t--;
}
}
