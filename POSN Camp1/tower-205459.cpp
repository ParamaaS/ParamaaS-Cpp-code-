#include<stdio.h>
#include<math.h>
int row,i,i2,a,b,f,idx;
main()
{
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		scanf("%d%d",&a,&b);
		for(i2=1;i2<=b;i2++)
		{
			scanf("%d",&f);
			if(f==a)
			{
				idx++;
			}
		}
		printf("%d\n",idx);
		idx=0;
	}
	
}      
