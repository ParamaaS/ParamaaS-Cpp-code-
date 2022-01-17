#include<stdio.h>
#include<math.h>
int d,c,n[1005],c2,a[1005][1005];
main()
{
	scanf("%d",&d);
	for(c=0;c<d;c++)
	{
		scanf("%d",&n[c]);
		for(c2=0;c2<n[c];c2++)
		{
			scanf("%d",&a[c][c2]);
		}
		
	}
	/*printf("%d ",a[0][1]);
	printf("%d ",a[0][0]);
	printf("%d\n",a[0][2]);*/
	
	for(c=0;c<d;c++)
	{
		for(c2=1;c2<n[c];c2=c2+2)
		{
			printf("%d ",a[c][c2]);
		}

		for(c2=0;c2<n[c];c2=c2+2)
		{
			printf("%d ",a[c][c2]);
		}
		
		printf("\n");
	}
	
}
