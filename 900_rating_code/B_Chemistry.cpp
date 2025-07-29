//https://codeforces.com/contest/1883/problem/B
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        string s;cin>>s;
        int freq[26] = {0};
        for(char x:s){
            freq[x-'a']++;
        }
        int odd = 0;
        for(int i=0;i<26;i++){
            if(freq[i]%2 == 1){
                odd++;
            }
        }
        if(k<odd-1){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }

    }
    return 0;
}