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
int n,c,siz,d,asw;
vector<int> vec;
main()
{
	scanf("%d",&n);
	for(c=0;c<n;c++)
	{
		scanf("%d",&d);
		vec.pb(d);
	}
	sort(vec.begin(),vec.end());
	siz=vec.size();
	for(c=0;c<vec.size();c++)
	{
        if(vec[c]<siz-1)
		{
            siz-=(vec[c]+1);
            asw+=(vec[c]);
		}
	}
	if(siz>0)
	{
		asw+=(siz-1);
	}
	printf("%d\n",asw);
}
