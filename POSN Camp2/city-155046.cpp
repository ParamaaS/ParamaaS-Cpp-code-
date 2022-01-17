#include<bits/stdc++.h>
using namespace std;
int n,m,c,u,v,w,h,a,b,i,cc,cc2;
vector<pair<pair<int,int>,int> > g[405];
int hs[25];
vector<int> vec;
priority_queue<pair<pair<int,int>,int> >pq;
main()
{
	scanf("%d%d",&n,&m);
	for(c=1;c<=m;c++)
	{
		scanf("%d%d%d",&a,&b,&i);
		g[a].push_back(make_pair(make_pair(b,i),c));
		g[b].push_back(make_pair(make_pair(a,i),c));
	}
	pq.push(make_pair(make_pair(0,a),c));
	while(!pq.empty())
	{	
		h=pq.top().first.first;
		u=pq.top().first.second;
		cc=pq.top().second;
		pq.pop();
		if(hs[u]) 
		{
			continue;
		}
		else if(!hs[u])
		{
			hs[u]=1;
			vec.push_back(cc);
		}
		for(c=0;c<g[u].size();c++)
		{
			v=g[u][c].first.first;
			w=g[u][c].first.second;
			cc2=g[u][c].second;
			if(hs[v])
			{
				continue;
			}
			pq.push(make_pair(make_pair(-w,v),cc2));
		}
	}
	sort(vec.begin(),vec.end());
	for(c=0;c<vec.size()-1;c++)
	{
		printf("%d\n",vec[c]);
	}
}
