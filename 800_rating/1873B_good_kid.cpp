#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    cin>>t;
    while(t>0){
      int   a = 0;
        int min_val = 1e9;
        cin>>n;
         vector<int> v(n);
       for(int i =0 ; i<n;i++){
        cin>>v[i];
        if(min_val>v[i]){
            min_val = v[i];
             a = i;
        }
       }
       v[a] = min_val+1;
  long long  prod =1;
for(int k  = 0 ; k<n;k++){
    prod = prod * v[k];
}
  cout<<prod<<"\n";
  t--;
}
}