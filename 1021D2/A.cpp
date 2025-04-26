#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    map<char, int> m;
    for(auto c : s){
        m[c]++;
    }
    string out;
    for(int i = 9;i>=0;i--){
        if(m['0'+i] > 0) {
            out+=('0'+i);
            m['0'+i]--;
        }
        else{
            int j = 1;
            while(j + i <= 9){
                if(m['0'+j+i] > 0){
                    out+=('0'+j+i);
                    m['0'+j+i]--;
                    break;
                }
                j++;
            } 
        }
    }
    cout<<out<<'\n';
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}