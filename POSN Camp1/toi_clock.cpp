#include<stdio.h>
int x,y,a;
main()
{
	scanf("%d %d",&x,&y);
	if(y>x)
	{
		x=y-x;
		x=x*5;
		printf("%d",x);
	}
	else if(x>y)
	{
		x=12-x;
		x=x+y;
		x=x*5;
		printf("%d",x);
	}
	else if(x==y)
	{
		printf("0");
	}
}
