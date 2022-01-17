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
int n,mid,st,en,m;
main()
{
	st=1;
	en=1000000000;
	mid=(st+en)/2;
	while(st<=en)
	{
		mid=(st+en)/2;
		printf("%d\n",mid);
		fflush(stdout);
		scanf("%d",&m);
		if(m==0)
		{
			st=mid+1;
		}
		else if(m==2)
		{
			en=mid-1;
		}
		else if(m==1)
		{
			return 1-1;
		}
	}
}
