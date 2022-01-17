#include<stdio.h>
int n,c,joy,jeaw,mo,sc;
main()
{
    scanf("%d",&n);
    for(c=0;c<n;c++)
    {
        scanf("%d",&sc);
        if(sc%60==0)
        {
            continue;
        }
        /*/if(sc>360)
        {
        sc=sc/360;
        }/*/
        mo=sc%120;
        if(mo>60)
        {
            jeaw++;
        }
        else if(mo<60)
        {
            joy++;
        }
    }
    printf("%d %d\n",joy,jeaw);
    if(joy>jeaw)
    {
        printf("Joy");
    }
    else if(joy<jeaw)
    {
        printf("Jaew");
    }
    else if(joy==jeaw)
    {
        printf("Draw");
    }
    scanf(" ");
}
