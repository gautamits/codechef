    #include <iostream>
    #include <vector>
    #include <algorithm>
     
    using std::cout;
    using std::cin;
    using std::endl;
    using std::vector;
    using std::string;
     
    int main() {
    	int T, N;
     
    	cin >> T;
    	while(T--) {
    		cin >> N;
     
    		vector<int> sticks(N);
    		for(int i = 0; i < N; ++i) cin >> sticks[i];
    		std::sort(sticks.begin(), sticks.end());
     
    		int width = 0, height = 0;
    		for(int i = N - 1; i > 0; --i) {
    			if(width && height) break;
     
    			if(!width && sticks[i] == sticks[i - 1]) {
    				width = sticks[i];
    				--i;
    			}
     
    			else if(width && !height && sticks[i] == sticks[i - 1])
    				height = sticks[i];
    		}
     
    		if(width && height)
    			cout << width * height << endl;
    		else
    			cout << -1 << endl;
    	}
     
    	return 0;
    } 