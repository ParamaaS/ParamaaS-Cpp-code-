/*/
- Paramaa Sawanpanyalert -
Lang : c++
/*/
#include <bits/stdc++.h>
using namespace std;
long long m,n,cc,c,rem=1,sum,mul;
vector<long long> vec;
main()
{
	scanf("%lld%lld",&n,&cc);
	for(c=0;c<=n;c++)
	{
		scanf("%lld",&m);
		vec.push_back(m);
	}
	for(c=0;c<=n;c++)
	{
		mul=0;
		mul=vec[c];
		if(c!=0)
		{
		rem*=cc;
		}
		mul*=rem;
		sum+=mul;
		//printf("%lld\n",mul);
	}
	printf("%lld",sum);
}
