#include <bits/stdc++.h>
using namespace std;
void solution(){

    long long int n,k,x;cin>>n>>k>>x;
    vector<long long int> arr(n);
    vector<long long int> prefix(n+1);
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
    }
    prefix[0] = 0;
    for(long long int i=0;i<n;i++){
        prefix[i+1] = prefix[i] + arr[i];
    }
    long long int count = 0;
    long long int last = prefix[n];
    for(long long int i=0;i<n;i++){
        long long hobe = (prefix[i] + x + last-1)/last;
        if(hobe <= k){
            count += (k - hobe+1);
        }
    }
    
    cout<<count<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}