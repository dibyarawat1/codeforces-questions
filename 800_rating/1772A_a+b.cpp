#include<iostream>
#include<string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t>0){
        int sum =0;
        string str;
        cin>>str;
        int current_num = 0;
     for(int  i =0 ; i < str.size();i++){
        if(str[i]== '+'){
        sum = sum + current_num;
        current_num = 0;
     }else{
        current_num =  current_num*10 + (str[i] - '0');
     }
    }
      cout<<current_num+sum<<"\n";
        t--;
    
    }
}