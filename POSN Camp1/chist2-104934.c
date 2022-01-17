#include<stdio.h>
main (){
     int i,n,j;
     scanf("%d",&n);
     for (i=0;i<=n-1;i++)
     {
         for(j=1;j<=n-i+1;j++)
         printf(" ");
         for(j=1;j<=i*2+1;j++)
         printf("*");
         
         printf("\n");
         }
           for (i=0;i<=n;i++)
     {
         for(j=1;j<=n-i+1;j++)
         printf(" ");
         for(j=1;j<=i*2+1;j++)
         printf("*");
         
         printf("\n");
         }
         scanf("");
     }
