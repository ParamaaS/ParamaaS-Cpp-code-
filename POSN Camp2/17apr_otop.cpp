/*/
- Paramaa Sawanpanyalert -
Lang : c++
/*/
#include <bits/stdc++.h>
using namespace std;
vector<int> g[50000];
queue<pair<int,int> > q;
int c,c2,ai,bi,sa,a,b,jw,rem,n,m,mn,sb,r1,r0;
int d[50005];
main()
{
	scanf("%d%d",&n,&m);
	for(c=0;c<m;c++)
	{
		scanf("%d%d",&ai,&bi);
		g[ai].push_back(bi);
		g[bi].push_back(ai);
	}
	for(c=0;c<=n;c++)
	{
		d[c]=100000000;
	}
	for(c=1;c<=n;c++)
	{
		if(d[c]==100000000)
		{
			r1=0;
			r0=0;
			q.push(make_pair(c,0));
			d[c]=0;
			r0++;
			while(!q.empty())
			{
				a=q.front().first;
				b=q.front().second;
				q.pop();
				for(c2=0;c2<g[a].size();c2++)
				{
					jw=g[a][c2];
					//printf(">>%d %d %d ",a,b,jw);
					if(b==0)
					{
						if(d[jw]==100000000)
						{
							q.push(make_pair(jw,1));
							r1++;
							//printf(">%d %d %d %d\n",rem,a,b,jw);
							d[jw]=1;	
						}
						else
						{
							if(d[jw]==0)
							{
								printf("-1\n");
								return 1-1;
							}
						}
					}
					else if(b==1)
					{
						if(d[jw]==100000000)
						{
							q.push(make_pair(jw,0));
							r0++;
							//printf(">%d %d %d %d\n",rem,a,b,jw);
							d[jw]=0;	
						}
						else
						{
							if(d[jw]==1)
							{
								printf("-1\n");
								return 1-1;
							}
						}
					}
				}
			}
			mn+=max(r1,r0);
		}
	}
	//mn=max(r1,r0);
	printf("%d\n",mn);
}
