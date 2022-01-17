#include<stdio.h>
int a,b,n,m,c,c2,asw[3000000],min=3000000;
main()
{
    scanf("%d %d %d",&a,&b,&n);
    for(c=0;c<=10000;c++)
    {
        for(c2=0;c2<=10000;c2++)
        {
            asw[a*c+b*c2]=1;
        }
    }
    
    for(c=0;c<n;c++)
    {
        scanf("%d",&m);
        for(c2=m;c2<=3000000;c2++)
        {
            if(asw[c2]==1)
            {
                printf("%d\n",c2);
                break;
            }
        }
    }
    scanf(" ");
}
