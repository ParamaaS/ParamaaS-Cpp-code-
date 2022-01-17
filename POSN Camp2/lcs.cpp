/*/
- Paramaa Sawanpanyalert -
Lang : c++
/*/
#include <bits/stdc++.h>
using namespace std;
int len1,len2,c,c2,dp[105][105],mc;
char s1[108],s2[108];
main()
{
	scanf("%s%s",s1,s2);
	len1=strlen(s1);
	len2=strlen(s2);
	for(c=0;c<=len1;c++)
	{
		dp[c][0]=0;
	}
	for(c=0;c<=len2;c++)
	{
		dp[0][c]=0;
	}
	for(c=1;c<=len1;c++)
	{
		for(c2=1;c2<=len2;c2++)
		{
			if(s1[c-1]==s2[c2-1])
			{
				dp[c][c2]=1+dp[c-1][c2-1];
			}
			else
			{
				dp[c][c2]=0;
			}
			mc=max(mc,dp[c][c2]);
		}
	}
	printf("%d",mc);
}
