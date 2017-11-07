#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int arr[n];
        for(long long int i=0;i<n;i++) cin>>arr[i];
        sort(arr,arr+n);
        long long int total=0;
        for(long long int i=n-1;i>=0;i-=2) total+=arr[i];
        cout<<total<<endl;
    }
    return 0;
}