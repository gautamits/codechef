#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int bit,a,b;
        cin>>bit>>a>>b;
        int t1=0;
        int t2=0;
        while(a){
            t1 += a&1;
            a >>= 1;
        }
        while(b){
            t1 += b&1;
            b >>= 1;
        }
        if(t1 > bit ) t1=bit
    }
}