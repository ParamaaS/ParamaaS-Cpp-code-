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
/*/
vector<pair<int,pair<int,int>>> vec;
int p[105];
void init(int x)
{
	for(int c=0;c<=x;c++)
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
}/*/
vector<pair<int,int>> g[105];
priority_queue<pair<int,int>> pq;
int d[105],dis[105][105];
bool chk[105];
int n,m,c,u,v,w,t,c2,x,y,k;
main()
{
	scanf("%d%d",&n,&m);
	for(c=0;c<m;c++)
	{
		scanf("%d%d%d",&u,&v,&w);
		g[u].pb(mp(w,v));
		//g[v].pb(mp(u,w));
		//vec.pb(mp(w,mp(u,v)));
	}
	/*/
	for(c=1;c<=n;c++)
		sort(g[c].begin(),g[c].end());//*/
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&x,&y);
		memset(dis,-1,sizeof dis);
		memset(d,-1,sizeof d);
		memset(chk,0,sizeof chk);
		pq.push(mp(0,x));
		d[x]=0;
		dis[x][x]=0;
		int mc=0;
		while(!pq.empty())
		{
			w=-pq.top().X;
			u=pq.top().Y;
			pq.pop();
			if(chk[u])
				continue;
			d[u]=w;
			dis[x][u]=w;
			chk[u]=1;
			for(c2=0;c2<g[u].size();c2++)
			{
				k=g[u][c2].X;
				v=g[u][c2].Y;
				//if(d[v]>k)
				//{
					//printf(">%d %d %d %d\n",w,u,v,k);
					//d[v]=d[u]+k;
					mc=max(mc,k);
                    ///pq.push(mp(-d[v],v));
                    pq.push(mp(-max(k,d[u]),v));
				//}
			}
		}/*/
		if(d[y]==100000000)
		printf("-1\n");
		else
		printf(">%d\n",d[y]);/*/
		printf("%d\n",d[y]);
	}
}
