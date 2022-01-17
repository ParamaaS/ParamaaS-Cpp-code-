#include<stdio.h>
#include<stdlib.h>
int n,m,c,s[200],a,b,sum;
main()
{
    scanf("%d%d",&n,&m);
    for(c=1;c<=m;c++)
    {
        scanf("%d%d",&a,&b);
        if(s[a]==0)
        {
            s[a]=b;
        }
        if(s[a]!=0)
        {
            if(s[a]>b)
            {
                s[a]=b;
            }
        }
    }
    for(c=1;c<=m;c++)
    {
        sum+=s[c];
    }
    printf("%d\n",sum);
    for(c=1;c<=n;c++)
    {
        printf("%d %d\n",c,s[c]);
    }
    scanf(" ");
}
