#include<stdio.h>
int n,c,x,y,idx,r;
main()
{
	scanf("%d",&n);
	for(c=0;c<n;c++)
	{
		scanf("%d%d",&x,&y);
		x=x*x;
		y=y*y;
		r=x+y;
		if(r<=4)
		{
			idx+=5;
			continue;
		}
		else if(r<=16)
		{
			idx+=4;
			continue;
		}
		else if(r<=36)
		{
			idx+=3;
			continue;
		}
		else if(r<=64)
		{
			idx+=2;
			continue;
		}
		else if(r<=100)
		{
			idx+=1;
			continue;
		}
		else
		{
			continue;
		}
	}
	printf("%d",idx);
}
