    	#include<bits/stdc++.h>
    	using namespace std;
    	int main()
    	{
    	    int t;
    	string x,y;
    	bool cant_match;
    	cin>>t;
    	for(int i=0;i<t;i++)
    	{
    	    cant_match = false;
    		cin>>x>>y;
    		for(int i=0;i<x.length();i++)
    		{
    		    if(x[i]!='?' && y[i]!='?' && x[i]!=y[i])
    		    {
    		        cant_match = true;
    		        break;
    		    }
    		}
    		if(cant_match)
    		{
    		    cout<<"No"<<endl;
    		}
    		else
    		{
    		    cout<<"Yes"<<endl;
    		}
    	   
    	}
    	return 0;
     
    }  