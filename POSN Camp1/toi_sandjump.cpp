#include<stdio.h>
int r,s,t,sc,n,ele,m;
main()
{
	scanf("%d%d%d",&r,&s,&t);
	ele=s+t;
	scanf("%d",&m);
	for(int c=1;c<=m;c++)
	{
		scanf("%d",&n);
		sc=n-r;
		if(n<=r)
		{
			printf("no\n");
			continue;
		}
		else if((sc%ele)>s)
		{
			//sc=n-r;
			printf("no\n");
			continue;
		}
		else if((sc%ele)<=s)
		{
			//sc=n-r;
			printf("yes\n");
			continue;
		}
		sc=0;
	}
}
