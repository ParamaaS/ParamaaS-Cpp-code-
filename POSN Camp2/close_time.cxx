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
int n,c,st,en,m,t,last;
priority_queue<int> copq;
priority_queue<pair<int,int> > pq;
///pair<int,int> p;
main()
{
	scanf("%d%d",&n,&m);
	for(c=0;c<n;c++)
	{
		scanf("%d%d",&st,&en);
		pq.push(make_pair(-st,-en));
	}
	while(copq.size()<m)
	{
		copq.push(pq.top().X+pq.top().Y);
		pq.pop();
	}
	while(!pq.empty())
	{
		///printf("1\n");
		if(-pq.top().X<=-copq.top())///yang mai sed-->wait
		{
			last=copq.top();
			copq.pop();
			copq.push(last+pq.top().Y);
			pq.pop();
		}
		else if(-pq.top().X>-copq.top())///sed la-->tum dai lei
		{
			copq.pop();
			copq.push(pq.top().X+pq.top().Y);
			pq.pop();
		}
	}
	while(!copq.empty())
	{
        t=copq.top();
        copq.pop();
	}
	printf("%d\n",-t);
}
