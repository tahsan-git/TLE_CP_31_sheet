#include <bits/stdc++.h>
using namespace std;
#define sp ios::sync_with_stdio(false);cin.tie(nullptr);
#define nl '\n'

int n,k,x;
vector<string> input;
vector<string> output;

void back_track_possiblity(int idx, string current){
    if(idx == k){
        output.push_back(current);
        return;
    }
    //recursive
    for(int i=0;i<n;i++){
        back_track_possiblity(idx + 1, current + input[i]);
    }
}
int main(){
    cin>>n>>k>>x;
    for(int it = 0; it < n; it++){
        string a; cin>>a;
        input.push_back(a);
    }
    for(int it = 0; it<n; it++){
        back_track_possiblity(1,input[it]);
    }
    sort(output.begin(),output.end());
    cout<<output[x-1]<<nl;
    
    return 0;
}