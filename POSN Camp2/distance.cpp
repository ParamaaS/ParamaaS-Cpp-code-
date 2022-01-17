/*/
- Paramaa Sawanpanyalert -
Lang : c++
/*/
#include <bits/stdc++.h>
using namespace std;
int n,c,c2;
double x,y,z,xx,yy,zz,ds,mn=2000000,mc;
vector<pair<pair<double,double>,double> > vec;
main()
{
	scanf("%d",&n);
	for(c=0;c<n;c++)
	{
		scanf("%lf%lf%lf",&x,&y,&z);
		vec.push_back(make_pair(make_pair(x,y),z));
	}
	for(c=0;c<n;c++)
	{
		for(c2=0;c2<n;c2++)
		{
			if(c==c2)
			{
				continue;
			}
			x=vec[c].first.first;
			y=vec[c].first.second;
			z=vec[c].second;
			xx=vec[c2].first.first;
			yy=vec[c2].first.second;
			zz=vec[c2].second;
			ds=sqrt((xx-x)*((xx-x))+(yy-y)*((yy-y))+(zz-z)*((zz-z)));
			mn=min(mn,ds);
			mc=max(mc,ds);
		}
	}
	printf("%.2lf %.2lf",mn,mc);
}
