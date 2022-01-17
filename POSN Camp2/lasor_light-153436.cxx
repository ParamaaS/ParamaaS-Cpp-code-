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
int m,n,c,stx,sty,x,y,dir;///1->U/2->R/3->D/4->L
bool chk=false;
int U,R,D,L,mc,nx,ny,c2,mx;
char s[505][505];
int ar[505][505],ard[505][505];
queue<pair<int,int>> q;
main()
{
	scanf("%d%d",&n,&m);
	for(c=0;c<n;c++)
	{
		scanf("%s",s[c]);
	}
	scanf("%d%d",&stx,&sty);
	stx--;
	--sty;
	///up
	memset(ar,-1,sizeof ar);
	memset(ard,-1,sizeof ard);
	while(!q.empty())
		q.pop();
	q.push(mp(stx,sty));
	ar[stx][sty]=1;
	ard[stx][sty]=1;
	mc=1;
	dir=1;

	while(!q.empty())
	{
		x=q.front().X;
		y=q.front().Y;
		q.pop();
		if(dir==1)///U
			nx=x-1,ny=y;
		else if(dir==2)///R
			nx=x,ny=y+1;
		else if(dir==3)///D
			nx=x+1,ny=y;
		else if(dir==4)///L
			nx=x,ny=y-1;
		if(nx>=0&&nx<n&&ny>=0&&ny<m)
		{
			if(ar[nx][ny]!=-1&&dir==ard[nx][ny])
			{
				chk=true;
				break;
			}
			ar[nx][ny]=ar[x][y]+1;
			ard[nx][ny]=dir;
			mc=max(mc,ar[nx][ny]);
			if(s[nx][ny]=='/')
			{
				if(dir==1)
					dir=2;
				else if(dir==2)
					dir=1;
				else if(dir==3)
					dir=4;
				else if(dir==4)
					dir=3;
			}
			else if(s[nx][ny]=='\\')
			{
				if(dir==1)
					dir=4;
				else if(dir==2)
					dir=3;
				else if(dir==3)
					dir=2;
				else if(dir==4)
					dir=1;
			}
			if(s[nx][ny]=='C')
			{
				mc--;
				break;
			}
			q.push(mp(nx,ny));
		}
		else
		{
			break;
		}
	}/*/
	for(c=0;c<n;++c)
	{
		for(c2=0;c2<m;c2++)
		{
			if(c==stx&&c2==sty)
			printf(" P");
			else
			printf("%2d",ar[c][c2]);
		}
		printf("\n");
	}//*/
	U=mc;
	mx=max(mx,U);
	if(chk)
	{
		printf("U\nVoyager");
		return 1-1;
	}
	///right
	memset(ar,-1,sizeof ar);
	memset(ard,-1,sizeof ard);
	while(!q.empty())
		q.pop();
	q.push(mp(stx,sty));
	ar[stx][sty]=1;
	ard[stx][sty]=2;
	mc=1;
	dir=2;

	while(!q.empty())
	{
		x=q.front().X;
		y=q.front().Y;
		q.pop();
		if(dir==1)///U
			nx=x-1,ny=y;
		else if(dir==2)///R
			nx=x,ny=y+1;
		else if(dir==3)///D
			nx=x+1,ny=y;
		else if(dir==4)///L
			nx=x,ny=y-1;
		if(nx>=0&&nx<n&&ny>=0&&ny<m)
		{
			if(ar[nx][ny]!=-1&&dir==ard[nx][ny])
			{
				chk=true;
				break;
			}
			ar[nx][ny]=ar[x][y]+1;
			ard[nx][ny]=dir;
			mc=max(mc,ar[nx][ny]);
			if(s[nx][ny]=='/')
			{
				if(dir==1)
					dir=2;
				else if(dir==2)
					dir=1;
				else if(dir==3)
					dir=4;
				else if(dir==4)
					dir=3;
			}
			else if(s[nx][ny]=='\\')
			{
				if(dir==1)
					dir=4;
				else if(dir==2)
					dir=3;
				else if(dir==3)
					dir=2;
				else if(dir==4)
					dir=1;
			}
			if(s[nx][ny]=='C')
			{
				mc--;
				break;
			}
			q.push(mp(nx,ny));
		}
		else
		{
			break;
		}
	}
	R=mc;
	mx=max(mx,R);
	/*/
	for(c=0;c<n;++c)
	{
		for(c2=0;c2<m;c2++)
		{
			if(c==stx&&c2==sty)
			printf(" P");
			else
			printf("%2d",ar[c][c2]);
		}
		printf("\n");
	}//*/
	if(chk)
	{
		printf("R\nVoyager");
		return 1-1;
	}
	///down
	memset(ar,-1,sizeof ar);
	memset(ard,-1,sizeof ard);
	while(!q.empty())
		q.pop();
	q.push(mp(stx,sty));
	ar[stx][sty]=1;
	ard[stx][sty]=3;
	mc=1;
	dir=3;

	while(!q.empty())
	{
		x=q.front().X;
		y=q.front().Y;
		q.pop();
		if(dir==1)///U
			nx=x-1,ny=y;
		else if(dir==2)///R
			nx=x,ny=y+1;
		else if(dir==3)///D
			nx=x+1,ny=y;
		else if(dir==4)///L
			nx=x,ny=y-1;
		if(nx>=0&&nx<n&&ny>=0&&ny<m)
		{
			if(ar[nx][ny]!=-1&&dir==ard[nx][ny])
			{
				chk=true;
				break;
			}
			ar[nx][ny]=ar[x][y]+1;
			ard[nx][ny]=dir;
			mc=max(mc,ar[nx][ny]);
			if(s[nx][ny]=='/')
			{
				if(dir==1)
					dir=2;
				else if(dir==2)
					dir=1;
				else if(dir==3)
					dir=4;
				else if(dir==4)
					dir=3;
			}
			else if(s[nx][ny]=='\\')
			{
				if(dir==1)
					dir=4;
				else if(dir==2)
					dir=3;
				else if(dir==3)
					dir=2;
				else if(dir==4)
					dir=1;
			}
			if(s[nx][ny]=='C')
			{
				mc--;
				break;
			}
			q.push(mp(nx,ny));
		}
		else
		{
			break;
		}
	}
	D=mc;
	mx=max(mx,D);
	/*/
	for(c=0;c<n;++c)
	{
		for(c2=0;c2<m;c2++)
		{
			if(c==stx&&c2==sty)
			printf(" P");
			else
			printf("%2d",ar[c][c2]);
		}
		printf("\n");
	}//*/
	if(chk)
	{
		printf("D\nVoyager");
		return 1-1;
	}
	///left
	memset(ar,-1,sizeof ar);
	memset(ard,-1,sizeof ard);
	while(!q.empty())
		q.pop();
	q.push(mp(stx,sty));
	ar[stx][sty]=1;
	ard[stx][sty]=4;
	mc=1;
	dir=4;
	while(!q.empty())
	{
		x=q.front().X;
		y=q.front().Y;
		q.pop();
		if(dir==1)///U
			nx=x-1,ny=y;
		else if(dir==2)///R
			nx=x,ny=y+1;
		else if(dir==3)///D
			nx=x+1,ny=y;
		else if(dir==4)///L
			nx=x,ny=y-1;
		if(nx>=0&&nx<n&&ny>=0&&ny<m)
		{
			if(ar[nx][ny]!=-1&&dir==ard[nx][ny])
			{
				chk=true;
				break;
			}
			ar[nx][ny]=ar[x][y]+1;
			ard[nx][ny]=dir;
			mc=max(mc,ar[nx][ny]);
			if(s[nx][ny]=='/')
			{
				if(dir==1)
					dir=2;
				else if(dir==2)
					dir=1;
				else if(dir==3)
					dir=4;
				else if(dir==4)
					dir=3;
			}
			else if(s[nx][ny]=='\\')
			{
				if(dir==1)
					dir=4;
				else if(dir==2)
					dir=3;
				else if(dir==3)
					dir=2;
				else if(dir==4)
					dir=1;
			}
			if(s[nx][ny]=='C')
			{
				mc--;
				break;
			}
			q.push(mp(nx,ny));
		}
		else
		{
			break;
		}
	}
	L=mc;
	mx=max(mx,L);
	if(chk)
	{
		printf("L\nVoyager");
		return 1-1;
	}
	else if(mx==U)
	{
		printf("U\n%d",mx);
		return 1-1;
	}
	else if(mx==R)
	{
		printf("R\n%d",mx);
		return 1-1;
	}
	else if(mx==D)
	{
		printf("D\n%d",mx);
		return 1-1;
	}
	else if(mx==L)
	{
		printf("L\n%d",mx);
		return 1-1;
	}
}
