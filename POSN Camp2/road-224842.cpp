#include<bits/stdc++.h>
using namespace std;
int n,m,c,ch,a,b;
set<int> st;
set<int>::iterator it,it2;
main()
{
	scanf("%d%d",&n,&m);
	n+=m;
	for(c=0;c<n;c++)
	{
		scanf("%d",&ch);
		if(!ch)//==0
		{
			scanf("%d%d",&a,&b);
			a++;
			b++;
			st.insert(a);
			st.insert(b);
			//sort(set.begin(),set.end());
		}
		if(ch)//==1
		{
			scanf("%d%d",&a,&b);
			it=st.upper_bound(a);
			it2=st.upper_bound(b);
			//printf(">>%d %d\n",*it,*it2);
			if(a==b)
			{
				printf("1\n");
				continue;
			}
//			if((a<*it&&*it<=b)&&it!=st.end())
//			{
//				printf("0\n");
//				continue;
//			}
//			else if((a<*it2&&*it2<=b)&&it2!=st.end())
//			{
//				printf("0\n");
//				continue;
//			}
//			else
			if(it==it2)
			{
				printf("1\n");
			}
			else
			{
				printf("0\n");
			}
		}
		
	}
}
