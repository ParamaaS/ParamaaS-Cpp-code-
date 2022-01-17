#include<stdio.h>
int n,c,m,mod[42],idx;
main()
{
    for(c=0;c<15;c++)
    {
        scanf("%d",&n);
        m=n%37;
        mod[m]++;
    }
    for(c=0;c<=36;c++)
    {
         if(mod[c]!=0)
         {
                idx++;
         }   
    }
    printf("%d",idx);
    scanf(" ");
}
