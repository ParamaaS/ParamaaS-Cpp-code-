/*/
- Paramaa Sawanpanyalert -
Lang : c++
/*/
#include <bits/stdc++.h>
using namespace std;
long long n,p,q,rem;
map<long long,long long> mp;
long long func(long long lv);
main()
{
	while(scanf("%lld%lld%lld",&n,&p,&q)!=EOF)
	{
		mp.clear();
		rem=func(n);
		printf("%lld\n",rem);
	}
}
long long func(long long lv)
{
	if(mp[lv])
	{
		return mp[lv];
	}
	if(lv==0) return 1;
	return mp[lv]= func(lv/p)+ func(lv/q);
}

