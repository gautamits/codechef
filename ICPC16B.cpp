     
    #include <cstdio>
    int main()
    {
        int T,n,t,i,one,minusone,resto;
        scanf("%d",&T);
        for (t=0;t<T;t++){
            one = minusone = resto = 0;
            scanf("%d",&n);
            long long int num;
            for (i=0;i<n;i++){
                scanf("%lld",&num);
                if (num==1)
                    one++;
                else if (num==-1)
                    minusone++;
                else if (num!=0)
                    resto++;
            }
            if (resto>1)
                printf("no\n");
            else if ((resto && minusone)||(minusone>1 && !one))
                printf("no\n");
            else printf("yes\n");
        }
        return 0;
      }  