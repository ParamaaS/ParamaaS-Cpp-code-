#include<bits/stdc++.h>
using namespace std;
int n,m,gc,lc;
main()
{
	scanf("%d%d",&n,&m);
	gc=__gcd(n,m);
	lc=n*m/gc;
	if(n%m==0&&n>=m)
	{
		printf("0\n");
		return 1-1;
	}
	printf("%d\n",m-gc);
	//printf("%d %d %d %d",n,m,gc,lc);
}
