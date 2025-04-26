#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    if(n%2==0){
        int kd = k/2;
        cout<<a[n/2+kd]-a[n/2-kd-1]+1<<'\n';
    }
    else{
        int kd;
        if(k%2==0) kd = k/2;
        else kd = k/2+1;
        cout<<a[n/2+kd]-a[n/2-kd]+1<<'\n';
    }
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}