#include <bits/stdc++.h>
using namespace std;
#define speed ios::sync_with_stdio(false);cin.tie(nullptr);
#define nl '\n'
vector<int> x_ordinate = {1,1,-1,-1};
vector<int> y_ordinate = {1,-1,1,-1};

int main(){
    speed
    int t;cin >> t;
    while(t--){
        long long int a,b,xk,yk,xq,yq;
        cin >> a >> b >> xk >> yk >> xq >> yq;
        set<pair<int,int>> king, quin;

        for(int i=0;i<4;i++){
            king.insert({xk+x_ordinate[i]*a,yk+y_ordinate[i]*b});
            king.insert({xk + x_ordinate[i]*b, yk + y_ordinate[i]*a});
            //for queen.
            quin.insert({xq+x_ordinate[i]*a,yq + y_ordinate[i]*b});
            quin.insert({xq+x_ordinate[i]*b, yq + y_ordinate[i]*a});
        }
        int ans = 0;
        for(auto pair : king){
            if(quin.find(pair) != quin.end()){
                ans++;
            }
        }
        cout<<ans<<nl;

    }
    return 0;
}