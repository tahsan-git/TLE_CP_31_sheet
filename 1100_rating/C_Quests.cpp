// Created on: 2025-08-15 10:17
// Author: Tahsan
// github profile:https://github.com/tahsan-git
// [problem link] : https://codeforces.com/problemset/problem/1914/C

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
        int n,k;
        cin >> n >> k;
        vector<int> a(n),b(n);
        for(int &x:a) cin >> x;
        for(int &x:b) cin >> x;

        //solution
        int result = 0;
        int b_max = 0;
        for(int i=0;i<k;i++){
            if(i >= n){
                result += (k-n) * b_max;
                break;
            }
            if(a[i] < b_max){
                //iteration baki = k-i;
                result += (k-i) * b_max;
                break;
            }
            else{
                result += a[i];
                b_max = max(b_max,b[i]);
            }
        }
        cout<<result<<nl;
    }
    return 0;
}