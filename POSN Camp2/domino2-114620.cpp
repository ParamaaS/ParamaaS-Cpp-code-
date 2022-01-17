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
unsigned long long n,t,c,sm,tt;
unsigned long long ar[103345],asw[103345];
unsigned long long f(unsigned long long lv);
main()
{
	scanf("%llu",&t);
	sm=1;
	tt=1;
	for(c=1;c<=100000;c++)
	{
		tt*=2;
		tt%=13345;
		asw[c]=(f(c)%13345)*(tt%13345);
	}
	while(t--)
	{
		scanf("%llu",&n);
		printf("%llu\n",asw[n]%13345);
	}
}
unsigned long long f(unsigned long long lv)
{
	if(ar[lv])
		return ar[lv];
	if(lv==1)
		return ar[1]=1;
	if(lv==2)
		return ar[2]=2;
	return ar[lv]=(f(lv-1)%13345+f(lv-2)%13345)%13345;
}
