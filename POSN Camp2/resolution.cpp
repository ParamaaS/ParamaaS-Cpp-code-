/*/
- Paramaa Sawanpanyalert -
Lang : c++
/*/
#include <bits/stdc++.h>
using namespace std;
int t,n,gs,ga,gi,c,c2,idx,ss,sa,si,rem;
int s,a,i,ar[25];
vector<pair<pair<int,int>,int> > vec;
vector<int> vec2;
void rec(int lv);
main()
{
 	scanf("%d",&t);
	for(c=0;c<t;c++)
	{
		scanf("%d%d%d",&gs,&ga,&gi);
		scanf("%d",&n);
		memset(ar,0,sizeof ar);
		while(!vec.empty())
		{
			vec.pop_back();
		}
		idx=0;
		for(c2=0;c2<n;c2++)
		{
			scanf("%d%d%d",&s,&a,&i);
			vec.push_back(make_pair(make_pair(s,a),i));
		}
		//c2=n;
		rec(0);
		if(idx==1)
		{
			printf("yes\n");
		}
		else 
		{
			printf("no\n");
		}
	}	
}
void rec(int lv)
{
	if(idx==1)
	{
		return;
	}
	if(lv==n)
	{
	/*/	si=0;
		ss=0;
		sa=0;
		for(int cc2=0;cc2<vec2.size();cc2++)
		{
				s=vec[vec2[cc2]].first.first;
				a=vec[vec2[cc2]].first.second;
				i=vec[vec2[cc2]].second;
				si+=i;
				sa+=a;
				ss+=s;/*/
			if(si==gi&&sa==ga&&ss==gs)
			{
				idx=1;
				return;
			}	
	//	}
		return;
	}
	else
	{
		
		//ar[lv]=0;
		rec(lv+1);
		//ar[lv]=1;
	/*	s=vec[lv].first.first;
		a=vec[lv].first.second;
		i=vec[lv].second;*/
		si+=vec[lv].second;
		sa+=vec[lv].first.second;
		ss+=vec[lv].first.first;
		rec(lv+1);
		si-=vec[lv].second;
		sa-=vec[lv].first.second;
		ss-=vec[lv].first.first;
	}
}
