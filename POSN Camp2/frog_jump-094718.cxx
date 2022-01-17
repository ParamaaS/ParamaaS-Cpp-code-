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
int n,m,arr[255][255],ard[250][250],c,c2;
int ar[255][255],x,y,disr,disd,nx,ny;
queue<pair<int,int>> q;
main()
{
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		for(c=0;c<n;c++)
		{
			for(c2=0;c2<m;c2++)
			scanf("%d",&arr[c][c2]);
		}
		for(c=0;c<n;c++)
		{
			for(c2=0;c2<m;c2++)
			scanf("%d",&ard[c][c2]);
		}
		memset(ar,-1,sizeof ar);
		q.push(mp(0,0));
		ar[0][0]=0;
		while(!q.empty())
		{
			x=q.front().X;///n
			y=q.front().Y;///m
			q.pop();
            nx=x+ard[x][y];///n
            ny=y+arr[x][y];///m
            if(nx>=n)
				nx%=n;
			if(ny>=m)
				ny%=m;
				/*/
			printf("   %d %d %d %d\n",x,y,nx,ny);
			for(c=0;c<n;c++)
			{
				for(c2=0;c2<m;c2++)
				printf("%3d",ar[c][c2]);
				printf("\n");
			}
			printf("\n");/*/
			if(ar[nx][y]==-1)
			{
				ar[nx][y]=ar[x][y]+1;
				q.push(mp(nx,y));
			}
			if(ar[x][ny]==-1)
			{
				ar[x][ny]=ar[x][y]+1;
				q.push(mp(x,ny));
			}
		}
		printf("%d\n",ar[n-1][m-1]);
	}
}
