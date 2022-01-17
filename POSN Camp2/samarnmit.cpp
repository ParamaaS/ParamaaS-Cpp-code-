#include<bits/stdc++.h>
using namespace std;
queue <pair<int,int> > q;
char in[10];
int idd,c,co,m,pri=-1;
main()
{
	while(scanf("%s",in)!=EOF)
	{
		//pri=-1;
		if(in[0]=='A')
		{
				scanf("%d%d",&idd,&m);
				q.push(make_pair(idd,m));
		}
		if(in[0]=='G')
		{
			scanf("%d",&pri);
		}
		if(in[0]=='E')
		{
			return 0;
		}
		if(pri!=-1)
		{
			while(!q.empty() )
			{
				if(q.front().second>=pri)
				{
					printf("%d %d\n",q.front().first,(q.front().second)-pri);
					q.pop();
					pri=-1;
					break;
				}
				q.pop();
			}
		}
		co++;
	}	
}
