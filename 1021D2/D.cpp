#include<bits/stdc++.h>
using namespace std;
int t;
int rem = 10e9+7;
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<int>> v;
    map<pair<int,int>,int> mp;
    int n_simp = 0;
    int n_adg = 0;
    for(int i = 0;i<(k+1);i++){
        int x,y;
        cin>>x>>y;
        vector<int> temp;
        pair<int,int> p = {x, y};
        cerr<<"Hii";
        if(mp[p]==0) mp[p]++;
        else n_simp = 1;
        temp.push_back(x);
        temp.push_back(y);
        v.push_back(temp);

        if(i > 0){
            int sum = (abs(v[i-1][0]-x) + abs(v[i-1][1]-y));
            if(sum != 2) {
                n_adg = 1;
            }
            else if((abs(v[i-1][0]-x) == 1)){
                mp[{v[i-1][0],y}]++;
                mp[{x, v[i-1][1]}]++;
            }
        }
        
        cerr<<"Hii";
    }
    if(n_simp == 1 || n_adg == 1 ) {
        cout<<0<<"\n";
        return;
    }
    int prod = 1;
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            if(mp[{i,j}]!=0) {
                prod = prod + mp[{i,j}];
                prod = prod%rem;
            }
        }

    }
    cout<<prod<<'\n';

}

int main(){
    
    cin>>t;
    while(t--){
        solve();
    }
}