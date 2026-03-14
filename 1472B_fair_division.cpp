#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t>0){
       int count1 = 0;
       int count2 =0;
        int n;
        cin>>n;
        int a = n;
        while(a>0){
            int c;
            cin>>c;
            if(c==1){
            count1++;
            }
            if(c==2){
              count2++;
            }
             a--;
        }
      if((count1+(count2*2))%2 !=0){
        cout<<"no"<<"\n";
      }
      else if(count1 == 0 && count2 % 2 != 0){
        cout<<"no"<<"\n";
      }
      else{
        cout<<"yes"<<"\n";
      }
        t--;
    }
}