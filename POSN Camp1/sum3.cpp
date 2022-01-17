#include<stdio.h>
#include<math.h>
int n,a[50005],c,c2,sum;
main()
{
	scanf("%d",&n);
	for(c=0;c<n;c++)
	{
		scanf("%d",&a[c]);
	}
	for(c=0;c<n;c++)
	{
		sum=a[c];
		for(c2=n;c2>c;c2--)
		{
			sum=sum+a[c2];	
		}
		printf("%d ",sum);
	}
}
