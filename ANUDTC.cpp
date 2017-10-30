#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(360%n==0){printf("y ");}
        else{printf("n ");}
        if(n<=360){printf("y ");}
        else{printf("n ");}
        if(n<27){printf("y ");}
        else {printf("n ");}
printf("\n");
    }
    return 0;
}