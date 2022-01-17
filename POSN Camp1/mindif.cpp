#include<stdio.h>
int n,k,c,s[1005],min=1000000005,c2,ok[1005];
int idx,rem,aha=1,i;
main()
{
	scanf("%d%d",&n,&k);
	for(c=0;c<n;c++)
	{
		scanf("%d",&s[c]);
	}
	for(c=0;c<k;c++)
	{
		for(c2=0;c2<n;c2++)
		{
			if(s[c2]<min)
			{
				min=s[c2];
				rem=c2;
			}
		}
		ok[idx]=min;
		idx++;
		min=1000000005;
		s[rem]=1000000006;
		rem=0;
	}
	printf("%d\n",ok[0]);
	for(int i=1;i<idx;i++)
	{
   		if(ok[i]!=ok[i-1])
   		{
      		printf("%d\n",ok[i]);
  		}
  	}
}
