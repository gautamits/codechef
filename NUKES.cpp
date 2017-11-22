#include <bits/stdc++.h>
#define llu long long unsigned int

int main()
{
	using namespace std;
        llu a,n,k;
        cin>>a>>n>>k;
        vector<llu>b(k);
        llu i=0;
        while(a>0){
            if(i>=k)break;
            b[i]=a%(n+1);
            a/=(n+1);
            i++;
        }

        for(i=0;i<k;i++) cout<<b[i]<< " ";
        //cout<< "\n";
    //}
    return 0;
}
