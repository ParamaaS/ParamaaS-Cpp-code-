#include<bits/stdc++.h>
using namespace std;
long long n,ar[55];
long long f(long long  s)
{	
	
	if(s==n)
	{
	 return 1;
	}
	else if (s>n)
	{
	 return 0;
	}
	if(ar[s]==0)
	{
		ar[s]=f(s+1)+f(s+2);
	}
		return ar[s];

}
main()
{
	scanf("%lld",&n);
	printf("%lld",f(0));
}
