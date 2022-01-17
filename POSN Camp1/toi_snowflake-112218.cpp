#include<stdio.h>
int n,c,c2,c3;
main()
{
      scanf("%d",&n);
      for(c=0;c<n;c++)
      {
            for(c2=0;c2<c;c2++)
            {
                printf(" ");
            }
            printf("*");
            for(c3=n-c-1;c3>0;c3--)
            {
                printf(" ");
            }
            printf(" ");
            for(c3=n-c-1;c3>0;c3--)
            {
                printf(" ");
            }
            printf("*");
      printf("\n");
      } 
      for(c=0;c<=n*2;c++)
      {
            printf("*");
      }
      printf("\n");
      for(c=0;c<n;c++)
      {
            for(c3=n-c-1;c3>0;c3--)
            {
                printf(" ");
            }
            printf("*");
            for(c2=0;c2<c;c2++)
            {
                printf(" ");
            }
            printf(" ");
            for(c2=0;c2<c;c2++)
            {
                printf(" ");
            }
            printf("*");
      printf("\n");
      } 
scanf(" ");    
}
