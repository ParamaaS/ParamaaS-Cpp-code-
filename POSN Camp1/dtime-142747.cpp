#include<stdio.h>
int n[10][10],k[9],rem;
main()
{
    for(int c=1;c<=4;c++)
    {
        for(int c2=0;c2<6;c2++)
        {
            scanf("%d",&n[c2][c]);
        }
        /*for(int c2=0;c2<6;c2++)
        {
            scanf("%d",&n[2][c2]);
        }
        for(int c2=0;c2<6;c2++)
        {
            scanf("%d",&n[3][c2]);
        }
        for(int c2=0;c2<6;c2++)
        {
            scanf("%d",&n[4][c2]);
        }*/
    }
       /*/ for(int c2=0;c2<6;c2++)
        {
            scanf("%d",&n[5][c2]);
        }
        for(int c2=0;c2<6;c2++)
        {
            scanf("%d",&n[6][c2]);
        }/*/
    for(int c=0;c<6;c++)
    {
        rem=n[c][1]*8;
        rem=rem+n[c][2]*4;
        rem=rem+n[c][3]*2;
        rem=rem+n[c][4];
        printf("%d",rem);
        rem=0;
        if(c==1||c==3)
        {
            printf(":");
        }
    }
    scanf(" ");
}
