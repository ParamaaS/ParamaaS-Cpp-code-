#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
char asw[105];
int v,h,c,len;
//v=verticle   h=horizontal
main()
{
	scanf("%s",asw);
	len=strlen(asw);
	for(c=0;c<len;c++)
	{
		if(asw[c]=='N')
		{
			v++;	
		}
		if(asw[c]=='E')
		{
			h++;
		}
		if(asw[c]=='W')
		{
			h--;
		}
		if(asw[c]=='S')
		{
			v--;
		}
		if(asw[c]=='Z')
		{
			v=0;
			h=0;
		}
	}
	printf("%d %d",h,v);
}
