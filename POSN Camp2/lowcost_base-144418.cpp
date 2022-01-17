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
int ar[45],c,m,sm,mn,mm,chk[45],n;
main()
{
	for(c=0;c<36;c++)
		scanf("%d",&ar[c]);
	scanf("%d",&n);
	while(n--)
	{
		mn=2000000000;
		scanf("%d",&m);
        for(c=2;c<=36;c++)
        {
			mm=m;
			sm=0;
			while(mm>0)
			{
				sm+=ar[mm%c];
				mm/=c;
				//printf("%d ",mm);
			}
			mn=min(mn,sm);
			chk[c]=sm;
        }
        for(c=2;c<=36;c++)
        {
			if(chk[c]==mn)
			{
				printf("%d %d\n",chk[c],c);
				break;
			}
        }
	}
}
