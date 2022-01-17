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
int n,t,dp[5015],c,c2;
main()
{
	dp[0]=1;
	for(c=1;c<=2005;c++)
	{
		for(c2=2005;c2>=0;c2--)
		if(dp[c2])
		{
			dp[c+c2]%=100999;
			dp[c+c2]+=dp[c2];
			dp[c+c2]%=100999;
		}
	}
	/*/for(c=1;c<=1999;c++)
	{
		printf(">%d %d\n",c,dp[c]);
	}/*/
	scanf("%d",&t);
	for(c=0;c<t;c++)
	{
		scanf("%d",&n);
		printf("%d\n",dp[n]%=100999);
	}
}
