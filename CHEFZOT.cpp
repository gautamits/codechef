#include <bits/stdc++.h>
using namespace std;
int main(){
        long long int n;
        cin>>n;
        long long int result=0;
        long long int l=0;
        long long int temp;
        for(long long int i=0;i<n;i++){
            
            cin>>temp;
            if(temp==0){
                if(l>result) result=l;
                l=0;
            }
            else l+=1;
        }
        if(l>result) result=l;
        cout<<result<<endl;
    return 0;
}