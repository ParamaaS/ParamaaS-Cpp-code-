#include<stdio.h>
#include<math.h>
int n,x_i,y_i,c,maxx,minx,miny,maxy,length,width,all;
main()
{
	scanf("%d",&n);
	maxx=0;
	maxy=0;
	minx=1000000;
	miny=1000000;
	for(c=0;c<n;c++)
	{
		scanf("%d %d",&x_i,&y_i);
		if(maxx<=x_i)
		{
			maxx=x_i;
		}
		if(maxy<=y_i)
		{
			maxy=y_i;
		}
		if(minx>=x_i)
		{
			minx=x_i;
		}
		if(miny>=y_i)
		{
			miny=y_i;
		}
	}
	/*printf("maxx=%d\n",maxx);
	printf("maxy=%d\n",maxy);
	printf("minx=%d\n",minx);
	printf("miny=%d\n",miny);*/
	length=maxy-miny;
	width=maxx-minx;
	all=2*(length+width);
	printf("%d",all);
}
