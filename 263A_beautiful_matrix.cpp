#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int arr[5][5]; 
    int a,b;
    for(int i=0;i<5;i++){
        for(int j=0; j<5 ;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                a = (2-j);
                b = (2-i);
                if(a<0){
                    a = -a;
                }
                if(b<0){
                    b = -b;
                }
            }
        }
        cout<<endl;
}
      cout<<a+b<<endl;
}

