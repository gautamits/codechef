#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    unsigned long long sum=0;
    long long n,i,j,arr[100200],s[35]={0};
    cin>>n;
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(j=0;j<31;j++)
    {
        for(i=0;i<n;i++)
        if(arr[i]&(1<<j))
        s[j]++;
    }
    for(i=0;i<31;i++)
    {
        sum+=(s[i]*(s[i]-1)/2)*pow(2,i);
    } 
    cout<<sum<<endl;
    return 0;
} 