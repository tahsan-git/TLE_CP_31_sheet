//https://codeforces.com/problemset/problem/1903/A
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        bool is_sorted = true;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(i>0){
                if(arr[i] < arr[i-1])
                    is_sorted = false;
            }
        }
        if(k<=1 && !is_sorted){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
    return 0;
}