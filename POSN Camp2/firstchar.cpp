/*/
- Paramaa Sawanpanyalert -
Lang : c++
/*/
#include<bits/stdc++.h>
using namespace std;
int n,c,ar[155],rem;
char s[35];
main()
{
	scanf("%d",&n);
	for(c=0;c<n;c++)
	{
		scanf("%s",s);
		rem=s[0];
	//	printf(">%c %d",rem,rem);
		rem-='a';
	//	printf(" %d",rem);
		ar[rem]++;
	//	printf(" %d\n",ar[rem]);
	}
	rem=0;
	for(c=0;c<=26;c++)
	{
		if(ar[c]>=5)
		{
			rem=1;
			printf("%c",c+'a');
		}
	}
	if(rem==0)
	{
		printf("PREDAJA");
	}
}

