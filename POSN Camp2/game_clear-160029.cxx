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
int n,m,k,c,c2;
vector<pair<int,pair<int,int>>> g[10005];
int st,en,mid,u,v,t,h,w,x;
int mn=1000000005;
int d[10005];
bitset<100005> bit;
priority_queue<pair<int,int>> pq;
main()
{
	scanf("%d%d%d",&n,&m,&k);
	for(c=0;c<m;c++)
	{
		scanf("%d%d%d%d",&u,&v,&t,&h);
		g[u].pb(mp(v,mp(t,h)));
	}
	st=0;
	en=1000000000;
	while(st<=en)
	{
		mid=(st+en)/2;
		x=mid;
		for(c=0;c<=n;c++)
		{
			d[c]=1000000000;
		}
		pq.push(mp(0,1));
		d[1]=0;
		bit.reset();
		while(!pq.empty())
		{
			w=-pq.top().X;
            u=pq.top().Y;
			pq.pop();
			for(c=0;c<g[u].size();c++)
			{
				v=g[u][c].X;
				t=g[u][c].Y.X;
				h=g[u][c].Y.Y;
				if(d[v]>d[u]+t&&x>=h)
				{
					d[v]=d[u]+t;
					bit[v]=1;
					pq.push(mp(-d[v],v));
				}
			}
		}
		///printf(">%d %d %d %d %d\n",mid,st,en,d[n],k);
		if(d[n]>=k)
		{
			st=mid+1;
		}
		if(d[n]<k)
		{
			mn=min(mn,x);
			en=mid-1;
		}
	}
	if(mn==1000000005)
	printf("-1\n");
	else
	printf("%d\n",mn);
}
