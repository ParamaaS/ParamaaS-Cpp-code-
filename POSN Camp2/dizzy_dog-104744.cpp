/*/
- Paramaa Sawanpanyalert -
Lang : c++
/*/
#include <bits/stdc++.h>
using namespace std;
unsigned long long n,ar[105],c;
main()
{
	scanf("%llu",&n);
	if(n==1)
	{
		printf("3\n");
		return 1-1;
	}
	if(n==2)
	{
		printf("7\n");
		return 1-1;
	}
	if(n==0)
	{
		printf("1\n");
		return 1-1;
	}
	ar[0]=1;
	ar[1]=3;
	ar[2]=7;
	for(c=3;c<=n;c++)
	{
		ar[c]=2*(ar[c-1])+ar[c-2];
	}
	printf("%llu",ar[n]);
}
