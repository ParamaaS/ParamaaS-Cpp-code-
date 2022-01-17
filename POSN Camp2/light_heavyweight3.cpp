/*/
- Paramaa Sawanpanyalert -
Lang : c++
/*/
#include <bits/stdc++.h>
using namespace std;
int n,m,c,w,v,rem,c2,rem2;
char ch[5];
set<pair<int,int> >st;
set<pair<int,int> >::iterator p;
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
			st.insert(make_pair(w,v) );
		}
		if(!strcmp(ch,"B"))
		{
			if(st.size()==0)
			{
				printf("0\n");
				continue;
			}
			p=st.begin();
			printf("%d\n",(*p).second);
			st.erase(p);
		}
		if(!strcmp(ch,"C"))
		{
			if(st.size()==0)
			{
				printf("0\n");
				continue;
			}
			p=st.end();
			p--;
			printf("%d\n",(*p).second);
			st.erase(p);
		}
	}
}
