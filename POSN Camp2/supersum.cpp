/*/
- Paramaa Sawanpanyalert -
Lang : c++
/*/
#include <bits/stdc++.h>
using namespace std;
int k,n;
int dp[20][20];
int rec(int lv,int lv2);
main()
{
	while(scanf("%d%d",&k,&n)!=EOF)
	{
		printf("%d\n",rec(k,n));	
	}
}
int rec(int lv,int lv2)
{
	if(dp[lv][lv2])
	{
		return dp[lv][lv2];
	}
	if(lv==0)
	{
		return lv2;
	}
	for(int c=1;c<=lv2;c++)
	{
		dp[lv][lv2]+=rec(lv-1,c);
	}
	return dp[lv][lv2];
}
