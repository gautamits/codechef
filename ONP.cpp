#include <bits/stdc++.h>
#include <stack>
using namespace std;
int getpref(char x){
	switch(x){
		case '^':
			return 4;
		case '*':
		case '/':
			return 3;
		case '+':
		case '-':
			return 2;
		case '(':
			return 1;
	}
}
int main(){
	int t;
	cin>>t;
	char arr[400];
	while(t--){
		cin>>arr;
		stack <char> op;
		for(int i=0;i<strlen(arr);i++){
			if( arr[i] == '(' ){                                    //if ( encountered then append to stack
				op.push('(');
			}
			else if(arr[i]==')'){                                   //if ) occured then pop the stack until ( is caught
				while( op.top() != '(' ){
					printf("%c",op.top());
					op.pop();
				}
				op.pop();
			}
			else if(arr[i]=='+' || arr[i]=='-' || arr[i]=='*' || arr[i]=='/' || arr[i]=='^'){          //if operator occured then push to stack
				while ( getpref( op.top() ) >= getpref( arr[i] ) ) {
					printf("%c",op.top());
					op.pop();
				}
				op.push(arr[i]);
			}
			else cout<<arr[i];                                               //this is integer. directly dump it
		}
	cout<<endl;
	}
	return 0;
}