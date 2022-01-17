#include<stdio.h>
int n,c,c2,c3;
main()
{
      scanf("%d",&n);
      for(c=0;c<n;c++)
      {
        for(c2=n-c;c2>=0;c2--)
        {
            printf(" ");
        }
        for(c3=0;c3<=c;c3++)
        {
            printf("*");
        }
        for(c3=1;c3<=c;c3++)
        {
            printf("*");
        }
        printf("\n");
      }
      for(c=0;c<n;c++)
      {
        for(c2=n-c-1;c2>=0;c2--)
        {
            printf(" ");
        }
        for(c3=0;c3<=c;c3++)
        {
            printf("*");
        }
        printf("*");
        for(c3=0;c3<=c;c3++)
        {
            printf("*");
        }
        printf("\n");
      }
      
      printf("***");
      for(c=0;c<2*n;c++)
      {
            printf("*");
      }
      
      printf("\n");
      for(c=0;c<n;c++)
      {
        for(c3=0;c3<=c;c3++)
        {
            printf(" ");
        }
         for(c2=n-c-1;c2>=0;c2--)
        {
            printf("*");
        }
        printf("*");
         for(c2=n-c-1;c2>=0;c2--)
        {
            printf("*");
        }
        printf("\n");
      }
      for(c=0;c<n;c++)
      {
        for(c3=-1;c3<=c;c3++)
        {
            printf(" ");
        }
        for(c2=n-c-1;c2>0;c2--)
        {
            printf("*");
        }
        printf("*");
        for(c2=n-c-1;c2>0;c2--)
        {
            printf("*");
        }
        printf("\n");
      }
    
      scanf(" ");
}
