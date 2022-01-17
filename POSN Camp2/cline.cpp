/*/
- Paramaa Sawanpanyalert -
Lang : c++
/*/
#include <bits/stdc++.h>
using namespace std;
list<int> li;
list<int>::iterator it;
int n,c,co,m,c2;
char s[5],s2[5];
main()
{
	scanf("%d",&n);
	for(c=0;c<n;c++)
	{
		scanf("%s",s);
		if(!strcmp(s,"A"))
		{
			scanf("%s",s2);
			if(!strcmp(s2,"L"))
			{
				co++;
				li.push_front(co);
				continue;
			}
			if(!strcmp(s2,"R"))
			{
				co++;
				li.push_back(co);
				continue;
			}
		}
		if(!strcmp(s,"D"))
		{
			scanf("%s",s2);
			scanf("%d",&m);
			if(!strcmp(s2,"L"))
			{
				for(c2=0;c2<m;c2++)
				{
					li.pop_front();
				}
			}
			if(!strcmp(s2,"R"))
			{
				for(c2=0;c2<m;c2++)
				{
					li.pop_back();
				}
			}
		}
	}
	for(it=li.begin();it!=li.end();it++)
	{
		printf("%d\n",*it);
	}
}
