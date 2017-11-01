#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,b,f;
        cin>>n>>b>>f;
        while(f--){
            int l,r;
            cin>>l>>r;
            if(b>=l && b<=r) b=l+r-b;
            //cout<<b<<endl;
        }
        cout<<b<<endl;
    }
    return 0;
}