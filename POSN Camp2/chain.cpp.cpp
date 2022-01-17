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
int n,sm,c,d,a,b,co,al;
list<int> li;
list<int>::iterator it,it2,it3;
char ch;
main()
{
	scanf("%d",&n);
	for(c=0;c<n;c++)
	{
		scanf("%d",&d);
		li.pb(d);
	}
	while(1)
	{
		scanf("%c",&ch);
		it=li.begin();
		it2=li.begin();
		it3=li.begin();
		if(ch=='+')
		{
			scanf("%d%d",&a,&b);
			for(c=0;c<a-1;c++)
				it++;
			for(c=0;c<b-1;c++)
				it2++;
			sm=*it+*it2;
			li.insert(it,sm);
			li.erase(it);
			li.erase(it2);
			//printf(">%d+%d %d\n",*it,*it2,sm);
		}
		else if(ch=='-')
		{
			scanf("%d%d",&a,&b);
			for(c=0;c<a-1;c++)
				it++;
			for(c=0;c<b-1;c++)
				it2++;
			sm=*it-*it2;
			li.insert(it,sm);
			li.erase(it);
			li.erase(it2);
			//printf(">%d-%d %d\n",*it,*it2,sm);
		}
		else if(ch=='*')
		{
			scanf("%d%d",&a,&b);
			for(c=0;c<a-1;c++)
				it++;
			for(c=0;c<b-1;c++)
				it2++;
			sm=(*it)*(*it2);
			li.insert(it,sm);
			li.erase(it);
			li.erase(it2);
			//printf(">%d*%d %d\n",*it,*it2,sm);
		}
		else if(ch=='^')
		{
			scanf("%d%d",&a,&b);
			for(c=0;c<a-1;c++)
				it++;
			li.insert(it,b);
			//printf(">^%d %d\n",*it,b);
		}
		else if(ch=='0')
		{
			it=li.begin();
			co=0;
			for(it=li.begin();it!=li.end();it++)
			{
				co++;
				if(co%2==1)
				{
					al+=*it;
					///printf("%d ",*it);
				}
			}
			break;
		}
	}
	printf("%d\n",al);
}
