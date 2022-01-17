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
long long n,ar[15][45];
long long sm;
long long f(long long lv,long long lv2)
{
	if(ar[lv][lv2])
		return ar[lv][lv2];
	if(lv2==1)
		return 1;
    if(lv==1)
	{
        return ar[lv][lv2]=f(2,lv2-1)+f(4,lv2-1);
	}
	if(lv==2)
	{
        return ar[lv][lv2]=f(1,lv2-1)+f(3,lv2-1)+f(5,lv2-1);
	}
	if(lv==3)
	{
        return ar[lv][lv2]=f(2,lv2-1)+f(6,lv2-1);
	}
	if(lv==4)
	{
        return ar[lv][lv2]=f(1,lv2-1)+f(5,lv2-1)+f(7,lv2-1);
	}
	if(lv==5)
	{
        return ar[lv][lv2]=f(2,lv2-1)+f(4,lv2-1)+f(6,lv2-1)+f(8,lv2-1);
	}
	if(lv==6)
	{
        return ar[lv][lv2]=f(3,lv2-1)+f(5,lv2-1)+f(9,lv2-1);
	}
	if(lv==7)
	{
        return ar[lv][lv2]=f(4,lv2-1)+f(8,lv2-1)+f(0,lv2-1);
	}
	if(lv==8)
	{
        return ar[lv][lv2]=f(7,lv2-1)+f(5,lv2-1)+f(9,lv2-1);
	}
	if(lv==9)
	{
        return ar[lv][lv2]=f(8,lv2-1)+f(6,lv2-1);
	}
	if(lv==0)
	{
        return ar[lv][lv2]=f(7,lv2-1);
	}
}
main()
{
	while(scanf("%lld",&n)!=EOF)
	{
		sm=0;
		for(long long c=0;c<=9;c++)
		{
			sm+=f(c,n);
		}
		printf("%lld\n",sm);
	}
}
