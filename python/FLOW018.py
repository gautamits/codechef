n=int(input())
for i in range(n):
    k=int(input())
    fact=1
    sum=0
    while(k>0):
        fact=fact*k
        k-=1
    print(fact) 