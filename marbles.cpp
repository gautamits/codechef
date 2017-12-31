#include <iostream>
using namespace std;
 long long int Combination (long long int n, long long int r) {
         long long int res = 1,i;
         if(r > n/2)
                 r = n-r;
         for(i = 0; i < r; i++) {
                 res *=  n;
                 res /= i+1;
                 n--;
          }
          return res;
  }
  int main(){
  	int t;
  	cin>>t;
  	while(t--){
  		int n,k;
  		cin>>n>>k;
  		cout<<Combination(n-1,n-k)<<endl;
  	}
  	return 0;
  }