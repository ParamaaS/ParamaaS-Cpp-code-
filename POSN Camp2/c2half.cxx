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
int d,n,sm,mc,nn,c,k,df;
long long dp[15005];
main()
{
    scanf("%d",&n);
    dp[0]=1;
    nn=n;
    while(n--)
	{
		scanf("%d",&d);
		d+=100;
		sm+=d;
		for(c=sm;c>=d;c--)
		{
            dp[c]|=(dp[c-d]<<1LL);
		}
	}
	nn/=2;
	mc=-1;
	df=1111111111;
	for(c=0;c<=sm;c++)
	{
		if(dp[c]&(1LL<<nn))
		{
			if(df>abs(c-(sm-c)))
			{
				df=abs(c-(sm-c));
				mc=c;
			}
		}
	}
	printf("%d\n",df);
	///printf("%d %d %d %d\n",abs(sm-mc),sm,mc,df);
}
