#include<stdio.h>
#include<string.h>
int idx=1,idx2=1,idx3=1;
long long n;
char ok[10];
main()
{
    scanf("%lld",&n);
    scanf("%s",ok);
    idx=strcmp(ok,"GB");
    idx2=strcmp(ok,"MB");
    idx3=strcmp(ok,"KB");
    if(idx==0)
    {
    n=n*73741824;
    printf("%lld",n);
    }
     if(idx2==0)
    {
    n=48576*n;
    printf("%lld",n);
    }
     if(idx3==0)
    {
    n=24*n;
    printf("%lld",n);
    }
    printf("M");
    scanf(" ");
}
