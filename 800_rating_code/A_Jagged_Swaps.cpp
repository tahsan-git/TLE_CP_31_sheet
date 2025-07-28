//https://codeforces.com/problemset/problem/1896/A
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool sorted = true;
        int first_element = arr[0];
        for(int i=1;i<n-1;i++){
            if(arr[i-1] > arr[i] || arr[i] < first_element || arr[i+1] < first_element){
                sorted = false;
                break;
            }
            else if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
        cout<<((sorted)?"YES\n":"NO\n");
    }
    return 0;
}