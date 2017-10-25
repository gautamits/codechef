g = int(input())
while g>0:
    n,k = map(int,input().split())
    a = [int(x) for x in input().split()]
    a.sort()
    count1,count2=0,0
    s = sum(a)
    for i in range(0,k):
        count1 += a[i]
 
    for i in range(n-1,n-k-1,-1):
        count2 += a[i]
 
    print(max(abs(count1-(s-count1)),abs(count2-(s-count2))))
    g-=1