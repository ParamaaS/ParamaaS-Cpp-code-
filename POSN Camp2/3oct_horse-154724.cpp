/*/
- Paramaa Sawanpanyalert -
Lang : c++
/*/
#include <bits/stdc++.h>
using namespace std;
int n,m,p,c,nx,ny;
int sx,sy,xx,yy;
int ar[1005][1005];
int dx[]={-1,-1,1,1,2,2,-2,-2};
int dy[]={2,-2,2,-2,1,-1,1,-1};
queue<pair<int,int> >q;
main()
{
	//freopen("3oct_horse.txt","w",stdout);
	while(1)
	{
		scanf("%d%d%d",&n,&m,&p);
		if(n==0&&m==0&&p==0)
		{
			return 1-1;
		}
		scanf("%d%d",&sx,&sy);
		q.push(make_pair(sx,sy));
		memset(ar,-1,sizeof ar);
		ar[sx][sy]=0;
		for(c=0;c<m;c++)
		{
			scanf("%d%d",&xx,&yy);
			//printf(">%d %d\n",xx,yy);
			ar[xx][yy]=-10;
		}
		while(!q.empty())
		{
			xx=q.front().first;
			yy=q.front().second;
			q.pop();
			//*/
			if(ar[xx][yy]==-10)
			{
				continue;
			}//*/
			for(c=0;c<8;c++)
			{
				nx=xx+dx[c];
				ny=yy+dy[c];
				if(nx>0&&nx<=n&&ny>0&&ny<=n&&ar[nx][ny]==-1)
				{
					ar[nx][ny]=ar[xx][yy]+1;
					q.push(make_pair(nx,ny));
				}
			}
		}
		for(c=0;c<p;c++)
		{
			scanf("%d%d",&xx,&yy);
			if(ar[xx][yy]==-10||ar[xx][yy]==-1)
			{
				printf("-1\n");
				continue;
			}
			if(ar[xx][yy]==0)
			{
				printf("0\n");
				continue;
			}
			printf("%d\n",ar[xx][yy]);
		}
	}
}
