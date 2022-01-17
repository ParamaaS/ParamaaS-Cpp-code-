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
int dp[105],dp2[105],n;
int rec(int lv)
{
	if(dp[lv])
		return dp[lv];
	if(lv==0||lv==1)
		return dp[lv]=1;
	//*/
	if(lv==2)
		return dp[lv]=2;//*/
	if(lv>=2)
		return dp[lv]=rec(lv-1)+rec(lv-2);
	else
		return 0;
}
int rec2(int lv2)
{
	if(dp2[lv2])
		return dp2[lv2];
	if(lv2==0)
		return dp2[lv2]=rec(1);
	if(lv2==1)
		return dp2[lv2]=rec2(0)+rec(2);
	if(lv2>=2)
		return dp2[lv2]=rec(lv2+1)+rec2(lv2-1)+rec2(lv2-2)+rec(lv2-3);
	else
		return 0;
}
main()
{
	scanf("%d",&n);
	printf("%d\n",rec(n)+rec2(n),rec(n),rec2(n));
}
