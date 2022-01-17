/*/
- Paramaa Sawanpanyalert -
Lang : c++
/*/
#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize ("Ofast")
#define X first
#define Y second
#define mp make_pair
#define pb push_back
#define debug(x) cerr <<  #x << " = " << x << endl;
#define read(x) freopen("x","r",stdin);
#define write(x) freopen("x","w",stdout);
int n,c,dint;
long long d,asw;
unordered_map<long long,int> mmp;
vector<long long> vec;
int fw[500005];
int rel[500005];
void add(int val,int idx)
{
	while(idx<=n)
	{
		fw[idx]+=val;
		idx+=((idx)&(-idx));
	}
}
long long sum(int idx)
{
	long long sm=0;
	while(idx>0)
	{
		sm+=fw[idx];
		idx-=((idx)&(-idx));
	}
	return sm;
}
main()
{
	scanf("%d",&n);
	mmp.clear();
	vec.clear();
	asw=0;
	vec.pb(-1);
	for(c=1;c<=n;c++)
	{
		scanf("%lld",&d);
		vec.pb(d);
		mmp[d]=c;
	}
	sort(vec.begin(),vec.end());
	for(c=1;c<=n;c++)
	{
		rel[mmp[vec[c]]]=c;
	}
	/*/for(c=1;c<=n;c++)
		debug(rel[c]);/*/
	memset(fw,0,sizeof fw);
	for(c=n;c>=1;c--)
	{
		dint=rel[c];
		asw+=sum(dint-1);
		add(1,dint);
	}
	printf("%lld\n",asw);
}
