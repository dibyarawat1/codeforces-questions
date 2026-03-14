#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    int count1 = 0;
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '4' || s[i] == '7'){
            count1++;
        }
    }
    /** agr number jo hai vo bhut big hota to count1 ko bhi check 
    karna padega whether is lucky number or not per abhi esme no can only upto 19 
    digits to kaam chal jayega
    **/
    
    if(count1 == 4 || count1 == 7){
        cout << "YES";
    } else {
        cout << "NO";
    }
}