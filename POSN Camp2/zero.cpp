#include<bits/stdc++.h>
long long s,x,c,sum,n;
main()
{
	scanf("%lld",&n);
	for(c=0;c<n;c++)
	{
		scanf("%lld",&s);
		while(s)
		{
			s/=5;
			sum+=s;
		}
		printf("%lld\n",sum);
		sum=0;
	}
}
