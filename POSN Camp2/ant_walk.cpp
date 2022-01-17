/*/
- Paramaa Sawanpanyalert -
Lang : c++
/*/
#include <bits/stdc++.h>
using namespace std;
long long arr[1009][1009],x,n,m;
long long dp(long long lv,long long lv2)
{
	if(lv<=0||lv2<=0)
	{
		return 0;
	}
	if(arr[lv][lv2])
	{
		return arr[lv][lv2]%558829;
	}
	if(arr[lv-1][lv2]&&arr[lv][lv2-1])
	{
		return arr[lv][lv2]=arr[lv-1][lv2]%558829+arr[lv][lv2-1]%558829;
	}
	if(lv==1||lv2==1)
	{
		return arr[lv][lv2]=1;
	}
	if(lv>1&&lv2>1)
	{
		return arr[lv][lv2]=dp(lv-1,lv2)%558829+dp(lv,lv2-1)%558829;
	}
	
}
main()
{
	scanf("%lld%lld",&n,&m);
	n++;
	m++;
	x=dp(n,m);
	x=x%558829;
	printf("%lld",x);
}
