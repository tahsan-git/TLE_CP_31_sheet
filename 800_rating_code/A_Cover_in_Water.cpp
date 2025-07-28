//https://codeforces.com/problemset/problem/1900/A
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int block = 0;
        int empty = 0;
        int seq_empty = 0;
        int temp = 0;
        for(char x:s){
            if(x == '#'){
                block++;
                seq_empty = max(temp,seq_empty);
                temp = 0;
            }
            else{
                empty++;
                temp++;
            }
        }
        seq_empty = max(temp,seq_empty);
        if(seq_empty >= 3){
            cout<<2<<endl;
        }
        else if(block == n){
            cout<<0<<endl;
        }
        else{
            cout<<empty<<endl;
        }
    }
    return 0;
}