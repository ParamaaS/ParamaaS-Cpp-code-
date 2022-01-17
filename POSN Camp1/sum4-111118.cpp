#include<stdio.h>
int a[20005];
int b[20005];
main()
{
    int n=0,x;
    while(scanf("%d",&x)!=EOF)
    {
     a[n]=x;
     n++;   
    }
    b[0]=a[0];
    for(int i=1;i<n;i++)
    {
        b[i]=b[i-1]+a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(b[i]==b[j])
            {
                printf("%d\n",b[i]);
                return 0;
            }
        }
    }
    printf("no\n");
}
