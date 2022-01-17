/*/
- Paramaa Sawanpanyalert -
Lang : c++
/*/
#include <stdio.h>
int t,c,xx,yy,x,y;
main()
{
	scanf("%d",&t);
	for(c=0;c<t;c++)
	{
		scanf("%*d%*d",&xx,&yy);
	}
	scanf("%d%d",&x,&y);
	if(x==0&&y==0)
	{
		printf("0");
		return 1-1;
	}
	if(x<0||y<0)
	{
		printf("0");
		return 1-1;
	}
	printf("%d",x+y);
}
