#include <bits/stdc++.h>
using namespace std;
void swap(long long int *a,long long int *b){
    long long int temp=*a;
    *a=*b;
    *b=temp;
}
long long int partition(long long int arr[],long long int low,long long int high){
    long long int pivot=arr[high];
    long long int i=low-1;
    for(long long int j=low;j<=high-1;j++){
        if(arr[j]<=pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return i+1;

}
void quick_sort(long long int arr[],long long int low,long long int high){
    if(low<high){
        long long int pi=partition(arr,low,high);
        quick_sort(arr,low,pi-1);
        quick_sort(arr,pi+1,high);
    }
}
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int arr[n];
        for(long long int i=0;i<n;i++) cin>>arr[i];
        quick_sort(arr,0,n-1);
        //for(long long int i=0;i<n;i++) cout<<arr[i]<<" ";
        //cout<<endl;
        long long int total=0;
        for(long long int i=n-1;i>=0;i-=2) total+=arr[i];
        cout<<total<<endl;
    }
    return 0;
}