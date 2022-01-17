/*/
- Paramaa Sawanpanyalert -
Lang : c++
/*/
#include <bits/stdc++.h>
using namespace std;
int r,cc,a,b;
int c,c2,c3,c4;
main()
{
	scanf("%d %d %d %d",&r,&cc,&a,&b);
	for(c=0;c<r;c++)
	{
		if(c%2==0)
		{
			for(c4=0;c4<a;c4++)
			{	
				for(c2=0;c2<cc;c2++)
				{
					if(c2%2==0)
					{
							for(c3=0;c3<b;c3++)
							{
							printf("X");
						}
					}
					else
					{
					for(c3=0;c3<b;c3++)
						{
							printf(".");
						}
					}
				}
				printf("\n");
			}
		}
		else
		{
			for(c4=0;c4<a;c4++)
			{
				for(c2=0;c2<cc;c2++)
				{
					if(c2%2==0)
					{
						for(c3=0;c3<b;c3++)
							{
							printf(".");
						}
					}
					else
					{
						for(c3=0;c3<b;c3++)
						{
							printf("X");
						}
					}
				}
				printf("\n");
			}
		}
	}
}
