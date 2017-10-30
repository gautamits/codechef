#include <bits/stdc++.h>
using namespace std;
int cmp(char* min, char* max){
    int j=0;
    for(int i=0;i<strlen(min);i++){
        while(min[i] != max[j]) j++;
        
        if(i<strlen(min)-1 && j==strlen(max)-1) return 1;
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    char m[25001],w[25001];
    while(t--){
        cin>>m>>w;
        int result;
        if(strlen(m) < strlen(w)) result=cmp(m,w);
        else if(strlen(m) > strlen(w)) result=cmp(w,m);
        else result=strcmp(m,w);
        if(result==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
}