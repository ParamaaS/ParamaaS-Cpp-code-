#include<bits/stdc++.h>
using namespace std;
long long n,rem;
long long x[55];
long long gen(long long lv);
main()
{
	scanf("%lld",&n);
	rem=gen(n);
	printf("%lld",rem);
}
long long gen(long long lv)
{
	if(x[lv]!=0)
	{
		return x[lv];
	}
	if(lv==0) return 1;
	if(lv==1) return 1;
	if(lv==2) return 2;
	
	return x[lv]=gen(lv-1)+gen(lv-2)+gen(lv-3);

}
