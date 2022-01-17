/*/
- Paramaa Sawanpanyalert -
Lang : c++
/*/
#include <bits/stdc++.h>
using namespace std;
int n,m,u,v,c,cc;
double w,mst;
int p[1005];
vector<int> asw;
vector<pair<pair<double,int>,pair<int,int> > > vec;
void init(double lv)
{
	for(int c=1;c<=n;c++)
		p[c]=c;
}
int find_(int x)
{
	if(p[x]==x)
		return x;
	return p[x]=find_(p[x]);
}
void union_(int x,int y)
{
	x=find_(x);
	y=find_(y);
	p[x]=y;
}
main()
{
	scanf("%d%d",&n,&m);
	init(m);
	for(c=0;c<m;c++)
	{
		scanf("%d%d%lf",&u,&v,&w);
		vec.push_back(make_pair(make_pair(w,c),make_pair(u,v)));
	}
	sort(vec.begin(),vec.end());
	for(c=0;c<m;c++)
	{
		w=vec[c].first.first;
		cc=vec[c].first.second;
		u=vec[c].second.first;
		v=vec[c].second.second;
		if(find_(u)!=find_(v))
		{
			mst+=w;
			asw.push_back(cc);
			union_(u,v);
		}
	}
	printf("%.3lf\n",mst);
	sort(asw.begin(),asw.end());
	for(c=0;c<asw.size();c++)
	{
		printf("%d\n",asw[c]);
	}
}
