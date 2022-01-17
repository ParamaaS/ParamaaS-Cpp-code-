#include<stdio.h>
#include<math.h>
int c,n,s[205][205],rem[205][205],c2,c3,c4;
main()
{
	scanf("%d",&n);
	for(c=0;c<n;c++)
	{
		for(c2=0;c2<n;c2++)
		{
		scanf("%d",&s[c][c2]);
		}
	}
	for(c=0;c<n;c++)
	{
		for(c2=0;c2<n;c2++)
		{
			for(c3=0;c3<=c;c3++)
			{
				for(c4=0;c4<=c2;c4++)
				{
					
					rem[c][c2]+=s[c3][c4];
					
				}
			}
			printf("%d ",rem[c][c2]);
		}
		printf("\n");
	}
}
