#include<iostream>
using namespace std;
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t>0){
        long long n;
        cin>>n;
          cout<<n/2<<"\n";   /*this approach is only for this problem*/
        t--;
    }
}

/*the approach below is best to check for the gcd but will give TLE  for the large num*/
#include<iostream>
using namespace std;
 int gcd(int a ,int b){
    while(b!=0){
  int remainder = a%b;
  a = b;
  b =  remainder;
    }
    return a;
 }
 int main(){
     ios_base:: sync_with_stdio(false);
     cin.tie(NULL);
    int t,n;
    cin>>t;
    while(t>0){
        int max_gcd = 0;
        cin>>n;
        for(int a = 1 ;  a<=n ; a++){
            for(int b = a+1 ; b<= n ; b++){
                int current_gcd = gcd(a,b);
                if(current_gcd > max_gcd){
                      max_gcd = current_gcd;
                }
            }
        }
        cout<<max_gcd<<"\n";
        t--;
    }
 }