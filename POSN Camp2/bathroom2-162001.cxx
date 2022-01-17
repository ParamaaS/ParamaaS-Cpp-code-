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
vector<unsigned long long> vec,asw;
bool chk=false;
unsigned long long sm,st,en,mid,n,m,c,d,pre,mn=1000000000000000005;
main()
{
	scanf("%llu%llu",&n,&m);
	for(c=0;c<n;c++)
	{
		scanf("%llu",&d);
		vec.pb(d);
	}
	st=0;
	en=1000000000000000000;
	//en=999999999999;
	while(st<=en)
	{
		mid=(st+en)/2;
		sm=0;
		for(c=0;c<n;c++)
		{
			sm+=(mid/vec[c]);
		}
		//printf("%lld %lld %lld %lld\n",mid,sm,st,en);
		if(sm<m)///st<en
		{
			st=mid+1;
		}
		if(sm>=m)///st>en
		{
			//asw.pb(mid);
			mn=min(mn,mid);
			en=mid-1;
		}
	}
	printf("%lld\n",mn);
}
