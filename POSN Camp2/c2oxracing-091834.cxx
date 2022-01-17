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
int dp[1005][1005];
char s[1005][1005];
int n,m,c,c2,mc;
main()
{
	scanf("%d%d",&n,&m);
	for(c=0;c<n;c++)
	{
		scanf("%s",s[c]);
	}
	for(c=0;c<n;c++)
	{
		for(c2=0;c2<m;c2++)
		{
			dp[c][c2]=s[c][c2]-'0';
		}
	}/*/
	printf("\n");
	for(c=0;c<n;c++)
	{
		for(c2=0;c2<m;c2++)
		{
			printf("%d",dp[c][c2]);
		}
		printf("\n");
	}/*/
	for(c=n-1;c>=0;c--)
	{
		for(c2=m-1;c2>=0;c2--)
		{
			if(!dp[c][c2])
				continue;
			dp[c][c2]=dp[c][c2]+min(min(dp[c+1][c2],dp[c][c2+1]),dp[c+1][c2+1]);
			mc=max(mc,dp[c][c2]);
		}
	}/*/
	printf("\n");
	for(c=0;c<n;c++)
	{
		for(c2=0;c2<m;c2++)
		{
			printf("%d",dp[c][c2]);
		}
		printf("\n");
	}/*/
	for(c=0;c<n;c++)
	{
		for(c2=0;c2<m;c2++)
		{
			if(dp[c][c2]==mc)
			{
				printf("%d %d %d\n",mc,c2+1,c+1);
				return 1-1;
			}
		}
	}
}
