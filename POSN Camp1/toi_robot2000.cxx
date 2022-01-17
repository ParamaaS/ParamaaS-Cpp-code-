/*/
- Paramaa Sawanpanyalert -
Lang : c++
/*/
#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
#define mp make_pair
#define pb push_back
char s[105];
int c,n,x,y;
main()
{
    scanf("%s",s);
	for(c=0;s[c];c++)
	{
        if(s[c]=='N')
            y++;
		else if(s[c]=='S')
            y--;
		else if(s[c]=='E')
            x++;
		else if(s[c]=='W')
            x--;
		else if(s[c]=='Z')
		{
			x=y=0;
		}
	}
	if(x==0&&0==y)
	{
        printf("Z\n");
	}
	if(y>0)
		for(c=0;c<y;c++)
			printf("F");
	if(y<0)
	{
        printf("RR");
		for(c=0;c<abs(y);c++)
			printf("F");
		printf("RR");
	}
	if(x>0)
	{
        printf("R");
		for(c=0;c<x;c++)
			printf("F");
	}
	if(x<0)
	{
        printf("RRR");
		for(c=0;c<abs(x);c++)
			printf("F");
	}
}
