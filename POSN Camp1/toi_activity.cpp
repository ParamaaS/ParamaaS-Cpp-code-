/*/
- Paramaa Sawanpanyalert -
Lang : c++
/*/
#include <bits/stdc++.h>
using namespace std;
long long n,c,m=1,k=1,re=1,nn1,nn2,nn;
main()
{
	scanf("%lld",&n);
	if(n==1||n==2)
	{
		printf("2");
		return 1-1;
	}
	nn=n;
	nn1=nn/2;
	nn2=nn-nn1;
	//printf(">>%lld %lld",nn1,nn2);
	for(c=max(nn2,nn1)+1;c<=nn;c++)
	{
		m*=c;
	}
	for(c=1;c<=min(nn2,nn1);c++)
	{
		k*=c;
	}
	re=m/k;
	k=1;
	/*/
	printf(" %lld ",re);//*/
	if(n%2==1)
	{
		re+=re;
	}
	printf("%lld",re);
}
