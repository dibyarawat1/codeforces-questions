#include<iostream>
#include<string>
using namespace std;
int main(){
    string sc;
    cin>> sc;
    for(int i= 0; i < sc.size() ; i+=2){
            for(int j =0 ; j+2< sc.size(); j+=2){
               if (sc[j] > sc[j+2]) {
                char temp = sc[j];
                sc[j] = sc[j+2];
                sc[j+2] = temp;
            }
               }
        }
        for(int  i = 0; i < sc.size() ; i++){
            cout<<sc[i];
        }
}