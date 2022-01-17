#include <stdio.h>
int a[500005],b,c,d,e;
int main ()
{
    scanf("%d",&c);
    for(b=1;b<=c;b++)
    {
        scanf("%d",&a[b]);
    }
e=a[1];
d=a[1];
    for(b=1;b<=c;b++)
    {

        if(a[b]>d)///max
                d=a[b];
        if(a[b]<e)///min
                e=a[b];
    }

    printf("%d",d-e);
}
