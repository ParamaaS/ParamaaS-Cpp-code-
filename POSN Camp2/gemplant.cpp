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
long long ft[200005],n,m,a,x,y,sm,c;
void add(long long val,long long idx)/// update val
{
	while(idx<=n)
	{
		ft[idx]+=val;
		idx+=(idx&(-idx));
	}
}
long long sum(long long idx)///find sum
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
	for(c=0;c<m;c++)
	{
		scanf("%lld",&a);
		if(a==1)
		{
			scanf("%lld%lld",&x,&y);
			add(x,y);
		}
		if(a==2)
		{
			scanf("%lld%lld",&x,&y);
			sm=sum(y)-sum(x-1);
			printf("%lld\n",sm);
		}
	}
}
