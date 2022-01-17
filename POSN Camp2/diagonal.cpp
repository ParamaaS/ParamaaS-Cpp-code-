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
unsigned long long n,di,pa,c;
main()
{
	scanf("%llu",&n);
	di=(n*(n-3))/2;
	pa=1;
	for(c=n;c>n-4;c--)
		pa*=c;
	pa/=4;
	pa/=3;
	pa/=2;
	if(n<4)
		pa=0;
	if(n==4)
		pa=1;
	printf("%llu %llu\n",di,pa);
}
