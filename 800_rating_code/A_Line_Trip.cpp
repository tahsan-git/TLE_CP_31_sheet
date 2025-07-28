//https://codeforces.com/problemset/problem/1901/A
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;cin>>n>>x;
        vector<int> station(n);
        for(int i=0;i<n;i++)
            cin>>station[i];
        int litre = (x - station[n-1]) * 2;
        int f_ref = station[0];
        litre = max(f_ref,litre);
        for(int i=1;i<n;i++){
            litre = max(litre,station[i] - f_ref);
            f_ref = station[i];
        }
        cout<<litre<<endl;
        
    }
    return 0;
}