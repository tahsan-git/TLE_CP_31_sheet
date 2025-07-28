//https://codeforces.com/contest/1858/problem/A
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        string winner;
        if(c%2==0){
            winner = "Second";
        }
        else{
            winner = "First";
        }
        if( winner == "First" && a>= b){
            cout<<winner<<endl;
        }
        else if(winner == "Second" && b>=a){
            cout<<winner<<endl;
        }
        // anna jitche tobe katie er dhan beshi
        else if(winner == "First" && b>a){
            cout<<"Second"<<endl;
        }
        // katie jitche tobe anna er dhan beshi
        else if(winner == "Second" && a>b){
            cout<<"First"<<endl;
        }
    }
    return 0;
}