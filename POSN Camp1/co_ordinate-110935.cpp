#include<stdio.h>
#include<stdlib.h>
int h,w,x,y,c,c2;
main()
{
    scanf("%d %d %d %d",&h,&w,&x,&y);
    for(c=0;c<=h+1;c++)
    {
        for(c2=0;c2<=w+1;c2++)
        {
            if(c==0)
            {
                printf("#");
            }
            else if(c2==0)
            {
                printf("#");
            }
            else if(c==x&&c2==y)
            {
                printf("+");
            }
            else if(c==h+1)
            {
                printf("#");
            }
            else if(c2==w+1)
            {
                printf("#");
            }
            //-|
            else if(c==x)
            {
                printf("-");
            }
            else if(c2==y)
            {
                printf("|");
            }
            else           
            {
                printf(".");
            }
        }
        printf("\n");
    }
    scanf(" ");
}
