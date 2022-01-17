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
long long c,n,ar[100005];
long long asw,mc;
unordered_map<long long,long long> dp;
long long sm(long long idx)
{
    long long x=0;
	while(idx>0)
	{
        x+=dp[idx];
        ///printf("*%lld %lld\n",idx,x);
        idx-=(idx&(-idx));

	}
	return x;
}
void add(long long val,long long idx)
{
	while(idx<=mc)
	{
        dp[idx]+=val;
        idx+=(idx&(-idx));
        ///printf("%d %d\n",idx,val);
	}
	///printf(".%d %d\n",idx,val);
}
main()
{
	scanf("%d",&n);
	for(c=1;c<=n;c++)
	{
		scanf("%lld",&ar[c]);
		///ar[c]++;
		///ear[c]+=4147483647;
		///printf("%lld\n",ar[c]);
		mc=max(mc,(long long)ar[c]);
	}
	for(c=n;c>=1;c--)
	{
		asw+=sm(ar[c]-1);
		add(1,ar[c]);
	}
	printf("%lld\n",asw);
}
