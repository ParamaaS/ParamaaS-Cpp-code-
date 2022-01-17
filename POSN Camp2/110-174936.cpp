#include<bits/stdc++.h>
using namespace std;
long long c,m,n,c2,rem,reml,idx;
vector<long long>::iterator p;
vector<long long> inp;
main()
{
	scanf("%lld",&n);
	inp.push_back(1);
	rem=1;
	for(c=1;c<=92681;c++)
	{
		rem+=c;
		inp.push_back(rem);
	}
	for(c=0;c<n;c++)
	{
		scanf("%lld",&m);
		p=lower_bound(inp.begin(),inp.end(),m);
		if(p==inp.end() || (*p)!=m)
		{
			printf("0\n");
		}
		else
		{
			printf("1\n");
		}
	}
}
