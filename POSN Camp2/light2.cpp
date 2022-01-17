#include<bits/stdc++.h>
using namespace std;
int n,m,w,v,rem,c;
char ch[5];
priority_queue <pair<int,int> >pq;
main()
{
	scanf("%d%d",&n,&m);
	n+=m;
	for(c=0;c<n;c++)
	{
		scanf("%s",ch);
		if(!strcmp(ch,"A"))
		{
			scanf("%d%d",&w,&v);
			w*=-1;
			v*=-1;
			pq.push(make_pair(w,v) );	
		}
		if(!strcmp(ch,"B"))
		{	
			if(pq.size()==0)
			{
				printf("0\n");
				continue;
			}
			else
			{
				rem=pq.top().second;
				printf("%d\n",-rem);
				pq.pop();
				continue;
			}
		}
	}
}
