#include<iostream>
#include<string>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(0);
    string sc;
    cin>>sc;
    sc[0] &= '_';
    for(int i= 0; i < sc.size() ; i++){
        cout<<sc[i];
    }
    
}