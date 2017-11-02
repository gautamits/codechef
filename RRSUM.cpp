#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,q,ans;
    ios_base::sync_with_stdio(false);
    cin>>n>>m;
    while(m--){
        cin>>q;
        if(q<n+2 || q>3*n){
            ans=0;
        }else{
            ans = n - abs(2*n+1-q);
        }
        cout<<ans<<endl;
    }
    return 0;
}
