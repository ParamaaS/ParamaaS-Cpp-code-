#include<bits/stdc++.h>
using namespace std;
long long a,b,aa,bb;
long long arr[100];
long long fu(int lv)
{	
	if(arr[lv])
	{
		return arr[lv];
	}	
	if(lv==1||lv==0)
	{
		arr[lv]=1;
		return arr[lv];
	}
	
	return arr[lv] = fu(lv-1)+fu(lv-2);
	
}
main()
{
	scanf("%lld%lld",&a,&b);
	if(a!=1)
	{
		aa=1;
		bb=b-a;
	}
	else
	{
		bb=b-1;
		aa=a;
	}
	printf("%lld",fu(bb));
	
}
