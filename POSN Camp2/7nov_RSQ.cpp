/*/
- Paramaa Sawanpanyalert -
Lang : c++
/*/
#include <bits/stdc++.h>
using namespace std;
long long t,c,c2,x,asw;
long long n,q,i,j;
long long ar[100005];
main()
{
	//freopen("RSQ.txt","w",stdout);
	scanf("%lld",&t);
	for(c=0;c<t;c++)
	{
		scanf("%lld%lld",&n,&q);
		memset(ar,0,sizeof ar);
		for(c2=0;c2<n;c2++)
		{
			scanf("%lld",&x);
			if(c2==0)
			{
				ar[c2]=x;
			}
			else
			{
				ar[c2]=ar[c2-1]+x;
			}
		}
		for(c2=0;c2<q;c2++)
		{
			scanf("%lld%lld",&i,&j);
			if(i==0)
			{
				asw=ar[j];
			}
			else if(i!=0)
			{
				asw=ar[j]-ar[i-1];
			}
			printf("%lld\n",asw);
		}
		if(c!=t-1)
		printf("\n");
	}
}
