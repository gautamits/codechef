for i in range(int(input())):
    a,b=input().split()
    ans=[]
    a=list(a)
    b=list(b)
    if len(a)<len(b):
        while len(a)<len(b):
            a=a.append('0')
        a=a[::-1]
    elif len(a)>len(b):
        while len(a)>len(b):
            b.append('0')
        b=b[::-1]
    
    print(a,b)
    for (i,j) in zip(a,b):
        ans.append((int(i)+int(j))%10)
    print("".join(map(str,ans)))
