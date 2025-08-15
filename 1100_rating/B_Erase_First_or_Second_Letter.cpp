// Created on: 2025-08-14 21:41
// Author: Tahsan
// github profile:https://github.com/tahsan-git
// [problem link] : https://codeforces.com/problemset/problem/1917/B

#include <bits/stdc++.h>
using namespace std;

#define Tahsan ios::sync_with_stdio(false);cin.tie(nullptr);
#define nl '\n'

#define yes cout<<"YES"<<nl;
#define no cout<<"NO"<<nl;

int main(){
    Tahsan
    int test_case;
    cin >> test_case;
    for(int t=0; t < test_case; t++){
        int n;
        cin >> n;
        int frequency[26] = {0};
        int unique[n] = {0};
        string s;
        cin >> s;
        int count = 0;
        for(int i=0;i<n;i++){
            frequency[s[i]-'a']++;
            if(frequency[s[i]-'a'] == 1){
                count++;
            }
            unique[i] = count;
        }
        //frequecy debug
        // for(int i=0;i<26;i++){
        //     cout<<frequency[i]<<' ';
        // }
        // cout<<nl;
        // for(int i=0;i<n;i++){
        //     cout << unique[i] << ' ';
        // }
        // cout << nl;
        int result = 0;
        for(auto num:unique){
            result += num;
        }
        cout << result << nl;
    }
    return 0;
}