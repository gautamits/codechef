for _ in range(int(raw_input())):
    a = raw_input()
    b = raw_input()
    c=0
    for i in b:
        if i in a:
            c+=1
    print c 