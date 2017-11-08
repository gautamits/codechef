#include <bits/stdc++.h>
using namespace std;
int main(){
    while(1){
        int n;
        cin>>n;
        if(n==0) break;
        int arr[n];
        int total=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];

        }
        sort(arr,arr+n);
        for(int i=n-1;i>=2;i--){
            int j=i-1;
            int k=0;
            while(k<j){
                if(arr[i]>arr[j]+arr[k]){
                    total+=j-k;
                    k++;
                }
                else j--;
            }
        }
        cout<<total<<endl;
    }
}