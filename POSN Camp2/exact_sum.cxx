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
map<long long,long long> mmp;
map<long long,long long>::iterator it;
int n,m,d,c,c2,f,s,ff,ss;
vector<int> vec;
main()
{
	scanf("%d%d",&n,&m);
	for(c=0;c<n;c++)
	{
		scanf("%d",&d);
		vec.pb(d);
	}
	for(c=0;c<n;c++)
	{
		for(c2=0;c2<n;c2++)
		{
			mmp[vec[c]+vec[c2]]++;
		}
	}
	it=mmp.begin();
	long long cnt=0;
	while(it!=mmp.end())
	{
		f=(*it).first;
		s=(*it).second;
		if(mmp.find(m-f)!=mmp.end())
		{
			cnt+=(mmp[f]*mmp[m-f]);
		}
		it++;
	}
	printf("%lld",cnt);
}
