#include<iostream>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int matrix[n][n];
for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t>0){
        solve();
        t--;
    }
}