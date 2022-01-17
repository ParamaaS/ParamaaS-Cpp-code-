#include<bits/stdc++.h>
using namespace std;
unsigned long long n,t;
unsigned long long ar[105];
unsigned long long gen(unsigned long long lv);
main()
{
	scanf("%llu",&t);
	while(t)
	{
		scanf("%llu",&n);
		printf("%llu\n",gen(n));
		t--;
	}
}
unsigned long long gen(unsigned long long lv)
{
	if(ar[lv])
		return ar[lv];
	if(lv==1)
		return ar[1]=1;
	if(lv==2)
		return ar[2]=2;
	if(lv==3)
		return ar[3]=3;
	return ar[lv]=gen(lv-1)+gen(lv-2); 
}

