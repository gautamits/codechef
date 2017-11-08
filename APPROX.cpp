#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    long int k;
    int dividend;
    int divisor;
    int remainder;
    while(t--){
        dividend=46870;
        divisor=33102;
        cin>>k;
        if(k==0) cout<<"3\n";
        else{
            cout<<"3.";
            while(k > 0){
                if(dividend>divisor){
                    cout<<dividend/divisor;
                    remainder=dividend%divisor;
                    dividend=remainder*10;
                }
                else{
                    cout<<"0";
                    dividend=dividend*10;
                }
                k--;
            }
            cout<<endl;
        }
    }
    return 0;
}