/*/
- Paramaa Sawanpanyalert -
Lang : c++
/*/
#include <bits/stdc++.h>
using namespace std;
long long c,c2,cal,n,rem,rem2,remn,idx;
int chk[1000005];
vector<long long> vec,vec2;
main()
{
	for(c=2;c<=1000000;c++)
	{
		if(chk[c]) continue;
		vec.push_back(c);
		for(c2=c+c;c2<=1000000;c2+=c)
			chk[c2]=1;
	}
	while(scanf("%lld",&n)!=EOF)
	{
		rem=0;
		idx=0;
		if(n<=1)
		{
			printf("%d is not prime.\n",n);
			continue;
		}
		for(c=0;vec[c]*vec[c]<=n;c++)
		{
			if(n%vec[c]==0)
			{
				rem=2;
				break;
			}
		}
		if(rem==0)
		{
			rem=1;
		}
		if(rem==2)
		{
			printf("%lld is not prime.\n",n);
			continue;
		}
		if(rem==1)//reverse
		{
			remn=n;
			rem2=0;
			rem=0;
			while(remn>0)
			{
				rem2*=10;
				rem2+=(remn%10);
				remn/=10;
				idx++;
			}
			if(rem2==n)
			{
				printf("%lld is prime.\n",n);
				continue;
			}
			for(c=0;vec[c]*vec[c]<=rem2;c++)
			{
				if(rem2%vec[c]==0)
				{
					rem=2;
					break;
				}
			}
			if(rem==0)
			{
				printf("%lld is emirp.\n",n);
			}
			if(rem==2)
			{
				printf("%lld is prime.\n",n);
				continue;
			}
		}
	}
}
