    # your code goes here
    for i in range(int(input())):
    	a,b=map(int,input().split())
    	if b==0:
    		print("0",a)
    	else:
    		print(int(a/b),int(a%b)) 