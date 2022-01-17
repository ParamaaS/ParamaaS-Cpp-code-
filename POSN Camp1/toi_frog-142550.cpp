#include<stdio.h>
int x,y,as;
main()
{
    scanf("%d%d",&x,&y);
    as=y/x;
    if(x>y)
    {
        printf("2");
    }
    else if(y%x==0)
    {
        printf("%d",as);
    }
   else if(y%x!=0)
    {
        as++;
        printf("%d",as);
    }
    
}
