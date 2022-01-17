/*/
- Paramaa Sawanpanyalert -
Lang : c++
/*/
#include<bits/stdc++.h>
using namespace std;
int n,m,c,c2,cc,x,y;
int ch[]={87,83,69,78},stx,sty,ar[205][205];//W,S,E,N
int dx[]={0,0,1,-1},dy[]={1,-1,0,0},nx,ny;
char s[205][205],co;
queue<pair<int,int> >q;
main()
{
	scanf("%d%d",&m,&n);
	for(c=0;c<n;c++)
	{
		scanf("%s",s[c]);
	}
	for(cc=0;cc<4;cc++)
	{
		co=ch[cc];
		memset(ar,-1,sizeof ar);
		for(c=0;c<n;c++)
		{
			for(c2=0;c2<m;c2++)
			{
				if(s[c][c2]==co)
				{
					stx=c2;
					sty=c;
					ar[sty][stx]=0;
					q.push(make_pair(sty,stx));
					break;
				}
			}
		}
		//printf("%c %d %d\n",co,stx,sty);
		while(!q.empty())
		{
			y=q.front().first;	
			x=q.front().second;
			q.pop();
			for(c=0;c<4;c++)
			{
				nx=x+dx[c];
				ny=y+dy[c];
				if(nx<0||ny<0||nx>=m||ny>=n)
				{
					printf("%c\n",co);
					return 1-1;
				}
				if(ar[ny][nx]==-1&&s[ny][nx]=='.')
				{
					ar[ny][nx]=ar[y][x]+1;
					q.push(make_pair(ny,nx));
				}
			}
		}
	}
	printf("Bye\n");
}
