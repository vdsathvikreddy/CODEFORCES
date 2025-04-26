#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    if(n<4) cout<<"NO"<<'\n';
    else{
        int max_streak = 0;
        int ms_num = -1;
        int flag = 0;
        int br_flag = 0;
        for(int i=0;i<n;i++){
            if(i == 0) {
                max_streak++;ms_num = a[i];
            }
            else if(a[i] == ms_num){
                max_streak++;
                if(flag ) {
                    if(max_streak>=2){
                        cout<<"YES"<<"\n";
                        br_flag = 1;
                        break;
                    }
                }
                else {
                    flag = 1;
                    max_streak = 0;
                }
                
            }
            else if(a[i]!= ms_num && a[i]== (ms_num+1)){
                
                max_streak = 1;
                ms_num = a[i];
            }
            else if(a[i]!= ms_num && a[i]!= (ms_num+1)){
                max_streak = 1;
                ms_num = a[i];
                flag = 0;
            }
        }
        if(!br_flag) cout<<"NO"<<'\n';
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