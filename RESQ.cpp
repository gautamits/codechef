    #include <iostream>
    #include <cmath>
    using namespace std;
     
    int main() {
    	// your code goes here
    	int t;
    	cin>>t;
    	int temp;
    	int m;
    	while(t--){
    		cin>>temp;
    		m=temp;
    		for(int i=1;i<=sqrt(temp);i++){
    			if(temp%i==0) if(abs(i-temp/i) < m) m=abs(i-temp/i);
    		}
    		cout<<m<<endl;
    	}
    	return 0;
    } 