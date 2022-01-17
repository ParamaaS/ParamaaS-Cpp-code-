/*/
- Paramaa Sawanpanyalert -
Lang : c++
/*/
#include <bits/stdc++.h>
using namespace std;
long long n,c,u=1,d=1,nn,nn1,nn2,a,m,re;
main()
{
	scanf("%lld%lld",&a,&m);
	
	nn=a;
	nn1=m;
	nn2=nn-m;
	//printf(">>%lld %lld",nn1,nn2);
	for(c=max(nn2,nn1)+1;c<=nn;c++)
	{
		u*=c;
	}
	for(c=1;c<=min(nn2,nn1);c++)
	{
		d*=c;
	}
	re=u/d;
	printf("%lld",re);
}
