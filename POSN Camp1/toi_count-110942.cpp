#include<stdio.h>
int m,n,t,c;
long long x,sum,sum2;
main()
{
	scanf("%d",&t);
	for(c=0;c<t;c++)
	{
		scanf("%d%d",&n,&m);
		sum=(long long)(n)*(n+1);
		sum/=2;
		sum2=(long long)(m)*(m+1);
		sum2/=2;
		x=(long long)sum-sum2;
//		printf("%lld ",sum);
//		printf("%lld ",sum2);
		printf("%lld\n",x);
		x=0;
		sum=0;
		sum2=0;
	}
}
