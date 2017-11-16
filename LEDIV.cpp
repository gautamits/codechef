#include <bits/stdc++.h>
using namespace std;
int main()
    {
    long int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long int arr[n];
        int flag=1;
        for(long int i=0;i<n;i++) cin>>arr[i];
        long int min=arr[0];
        for(long int i=1;i<n;i++) 
            if(arr[i] < min) 
                min=arr[i];
        for(int i=0;i<n;i++){
            if(arr[i] % min )
            {
                flag=0;
                break;
            }
        }
        if(flag==1 && min != 1) cout<<min;
        else cout<<"-1";
        cout<<endl;
    }
    return 0;
    }

