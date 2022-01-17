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
long long n,ft[200005],d,x,y,z,sm,m,c,c2;
void add(long long val,long long idx)
{
	while(idx<=n)
	{
		ft[idx]+=val;
		idx+=(idx&(-idx));
	}
}
long long sum(long long idx)
{
	long long ret=0;
	while(idx>0)
	{
		ret+=ft[idx];
		idx-=(idx&(-idx));
	}
	return ret;
}
main()
{
	scanf("%lld%lld",&n,&m);
	memset(ft,0,sizeof ft);
	for(c=0;c<m;c++)
	{
		scanf("%lld",&d);
		if(d==1)
		{
			scanf("%lld%lld%lld",&x,&y,&z);
			//for(c2=x;c2<=y;c2++)
				add(z,x);
				add(-z,y+1);
		}
		if(d==2)
		{
			scanf("%lld",&x);
			/*/
			for(int c2=0;c2<=n;c2++)
            printf(">%lld %lld\n",c2,sum(c2));//*/
            printf("%lld\n",sum(x));
		}
	}
}
