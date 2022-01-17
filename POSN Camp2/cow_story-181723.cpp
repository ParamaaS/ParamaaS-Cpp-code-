#include<bits/stdc++.h>
using namespace std;
long long n,rem;
long long ye1,ye2,ye3,ye4;
main()
{
	scanf("%lld",&n);
	if(n<=4)
	{
		printf("%lld",n);
		return 1-1;
	}
	for(int c=1;c<=n;c++)
	{
		ye1+=rem;
		ye4=ye3;
		ye3=ye2;
		ye2=ye1;
		ye1=1;
		rem+=ye4;
		
	//	printf("c=%d\ny1=%lld y2=%lld y3=%lld y4=%lld rem=%lld\n",c,ye1,ye2,ye3,ye4,rem);
	}
	printf("%lld",rem+ye1+ye2+ye3);
}
