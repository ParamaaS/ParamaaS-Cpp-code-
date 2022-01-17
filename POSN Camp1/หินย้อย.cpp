#include<stdio.h>
int n,c,c2,s[155],d[15],max,sum,i;
main()
{
	scanf("%d",&n);
	for(c=0;c<n;c++)
	{
		scanf("%d",&d[c]);
		if(d[c]>max) max=d[c];
		sum+=d[c]+d[c];
		//printf("%d\n",d[c]);
	}
	for(c=0;c<n;c++)
	{
			for(c2=max;c2>max-d[c];c2--)
			{
				s[i]=-c2;
				i++;
			}for(c2=max-d[c]+1;c2<=max;c2++)
			{
				s[i]=c2;
				i++;
			}
	}
	/*/
	for(c=0;c<sum;c++)
	{
		printf("%d",s[c]);
	}
	printf("\n");
	/*/
	for(c=max;c>0;c--)
	{
		for(c2=0;c2<sum;c2++)
		{
			if((-s[c2])==c)
			{
				printf("\\");
			}else if(s[c2]==c)
			{
				printf("/");
			}
			else if(s[c2]<c)
			{
				printf(".");
			}
			else if(s[c2]>c)
			{
				printf(".");
			}
			
			else 
			{
				printf(".");
			}
		}
			printf("\n");
	}

}
