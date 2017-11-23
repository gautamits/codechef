#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n,m,ma,maxfreq,sum,temp;
    while(t--){
        cin>>n>>m;
        sum=0;
        ma=0;
        maxfreq=0;
        for(int i=0;i<n;i++){
            cin>>temp;
            sum+=temp;
            if(temp > ma){
                ma=temp;
                maxfreq=0;
                }
            else if(temp==ma) maxfreq+=1;
            }
        if((sum+m)%n==0) cout<<"Yes\n";
        else cout<<"No\n";
        }
        return 0;
    }
