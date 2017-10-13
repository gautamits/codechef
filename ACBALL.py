for i in range(int(input())):
	a=raw_input()
	b=raw_input()
	c=[]
	for i,j in zip(a,b):
		if i==j:
			if i=='B':
				c.append("W")
			else:
				c.append("B")
		else:
			c.append("B")
	print "".join(c)