#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    long long int temp;
    while(t--){
        cin>>n;
        long long int arr[n];
        for(long long int i=0;i<n;i++) cin>>arr[i];
        sort(arr,arr+n);
        long long int m=arr[1]-arr[0];
        for(long long int i=2;i<n;i++){
            temp=arr[i]-arr[i-1];
            if(temp < m) m=temp;

        }
        cout<<m<<endl;

        


    }
}