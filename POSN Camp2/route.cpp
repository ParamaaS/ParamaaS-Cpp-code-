/*/
- Paramaa Sawanpanyalert -
Lang : c++
/*/
#include <bits/stdc++.h>
using namespace std;
int r,cc,c,c2,xs,ys,xe,ye;
int x1,x2,rem;
char s[105][105];
int in[105][105];
queue<pair<int,int> > q;
main()
{
	scanf("%d%d",&r,&cc);
	for(c=0;c<r;c++)
	{
		scanf("%s",s[c]);
	}
	for(c=0;c<r;c++)
	{
		for(c2=0;c2<cc;c2++)
		{
			in[c][c2]=1000000000;
			if(s[c][c2]=='B')
			{
				xs=c;
				ys=c2;
				q.push(make_pair(c,c2));
			}
			if(s[c][c2]=='C')
			{
				xe=c;
				ye=c2;
			}
		}	
	}
	in[xs][ys]=0;
	while(!q.empty())
	{
		x1=q.front().first;
		x2=q.front().second;
		q.pop();
		//printf(">%d %d\n",x1,x2);
		if(x1>0)//left
		{
			if(s[x1-1][x2]!='*'&&in[x1-1][x2]==1000000000)
			{	
				in[x1-1][x2]=in[x1][x2]+1;
				q.push(make_pair(x1-1,x2));
				if(x1-1==xe&&x2==ye)
				{
					break;
				}	
			}
		}
		if(x2>0)//up
		{
			if(s[x1][x2-1]!='*'&&in[x1][x2-1]==1000000000)
			{
				in[x1][x2-1]=in[x1][x2]+1;
				q.push(make_pair(x1,x2-1));
				if(x1==xe&&x2-1==ye)
				{
					break;
				}
					
			}	
		}
		if(x1<r-1)//right
		{
			if(s[x1+1][x2]!='*'&&in[x1+1][x2]==1000000000)
			{
				in[x1+1][x2]=in[x1][x2]+1;
				q.push(make_pair(x1+1,x2));
				if(x1+1==xe&&x2==ye)
				{
					break;
				}		
			}	
		}
		if(x2<cc-1)//down
		{
			if(s[x1][x2+1]!='*'&&in[x1][x2+1]==1000000000)
			{
				in[x1][x2+1]=in[x1][x2]+1;
				q.push(make_pair(x1,x2+1));
				if(x1==xe&&x2+1==ye)
				{
					break;
				}
			}
		}
	}
	printf("%d",in[xe][ye]);	
}

