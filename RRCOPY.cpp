#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        set <int> data;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            data.insert(temp);
        }
        int total=0;
        /*for(int i=0;i<n;i++){
            if(data.count(s[i])) total++;
        }
        */
        cout<<data.size()<<endl;
    }
    return 0;
}