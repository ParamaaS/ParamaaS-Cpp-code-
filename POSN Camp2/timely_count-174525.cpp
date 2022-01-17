#include<bits/stdc++.h>
using namespace std;
long long n,a[55],b[55],c,f,s;
main()
{
	scanf("%lld",&n);
	a[1]=0;
	b[1]=1;
	a[2]=1;
	b[2]=1;
	for(c=3;c<=n;c++)
	{
		a[c]=a[c-1]+a[c-2];
		b[c]=b[c-1]+b[c-2];
	}
	printf("%lld %lld",a[n],b[n]);
}
