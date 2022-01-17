#include<stdio.h>
int n,c,c2,c3;
main()
{
      scanf("%d",&n);
      for(c=1;c<=n;c++)
      {
          printf(" ");
        for(c2=n-c;c2>0;c2--)
        {
            printf(" ");
        }
        for(c2=0;c2<c;c2++)
        {
            printf("*");
        }
        if(c>1)
        {
            for(c2=1;c2<c;c2++)
                {
                    printf("*");
                }
        }
        printf("\n");
      }

      printf("\n");

    for(c=1;c<=n+1;c++)
      {
        for(c2=n-c;c2>=0;c2--)
        {
            printf(" ");
        }
        for(c2=0;c2<c;c2++)
        {
            printf("*");
        }
        if(c>1)
        {
            for(c2=1;c2<c;c2++)
                {
                    printf("*");
                }
        }
        printf("\n");
      }
      scanf(" ");
}
