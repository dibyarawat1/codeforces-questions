#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>nums(n);
    int count=0;
    if(n>=1 && n<=50 && n>=k){
    for(int i=0;i<n;i++){
        cin>>nums[i];
        }
    }
    for(int i=0;i<n;i++){
      if(nums[i]==0){
            break;
      }
        if(nums[i]>=nums[k-1]){
            count++;
        }
    }
    cout<<count;
}