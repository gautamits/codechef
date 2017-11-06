#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int i,j;
        cin>>i>>j;
        int count=0;
        while(i!=j){
            if(i>j) i>>=1;
            else j>>=1;
            count++;
        }
        cout<<count<<endl;

        
    }
    return 0;
}