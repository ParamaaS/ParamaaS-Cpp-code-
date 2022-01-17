#include<stdio.h>
#include<math.h>
int m,n,x;
double a[10],sum;
main()
{
	scanf("%d %d",&n,&m);
	for(x=0;x<n;x++)
	{
		scanf("%lf",&a[x]);
	}
	for(x=0;x<n;x++)
	{
		a[x]=pow(a[x],m);
		sum=sum+a[x];
	}
	printf("%.3lf",sum);
	
}
