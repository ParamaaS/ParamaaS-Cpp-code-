#include<bits/stdc++.h>
using namespace std;
int r,c,c2,rem,cc;
char s[105][105];
int ch[105][105];
main()
{
	scanf("%d %d",&r,&c);
	for(c2=0;c2<r;c2++)
	{
		scanf("%s",s[c2]);
	}
	for(c2=0;c2<r;c2++)
	{	
		for(cc=0;cc<c;cc++)
		{	
			if(s[c2][cc]=='#')
			{
				if(s[c2][cc-1]=='#')
				{
					rem--;
				}
				if(s[c2-1][cc]=='#')
				{
					rem--;
				}
				rem++;
				continue;
			}		
		}
	}

	printf("%d",rem);
}
