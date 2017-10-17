#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n,k;
    while(t--){
        cin>>n;
        long long int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        cin>>k;

        int m=0;
        for(int i=0;i<n;i++){
            if(arr[i] < arr[k-1] ) m++;

        }
        cout<<n+1-(n-m)<<endl;

    }
}
