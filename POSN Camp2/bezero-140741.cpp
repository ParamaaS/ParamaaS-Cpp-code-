#include<bits/stdc++.h>
unsigned long long s,c,sum,ss,plu=1,idx;
main()
{
	scanf("%llu",&s);
	ss=s;
	for(c=ss;c>=2;c--)
	{
		//printf(">%llu %llu ",c,plu);
		plu*=c;	
		//printf("%llu ",plu);
		while(plu%10==0)
		{
			plu/=10;
		}
		//printf("%llu\n",plu);
		plu%=100000;	
	}	
	printf("%llu\n",plu%10);
}
