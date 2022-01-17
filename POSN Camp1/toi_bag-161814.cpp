#include<stdio.h>
int n,m,c,sum,s,idx=1;
main()
{
	scanf("%d%d",&n,&m);
	for(c=0;c<n;c++)
	{
		scanf("%d",&s);
		sum+=s;
		if(sum>m)
		{
			idx+=1;
			sum=s;
			continue;
		}
		else if(sum<m)
		{
			continue;
		}

	}
	printf("%d",idx);
	scanf(" ");
}
