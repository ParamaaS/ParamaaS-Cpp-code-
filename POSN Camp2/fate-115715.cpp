#include<bits/stdc++.h>
using namespace std;
int c,n,m,x,c2;
vector<int> vec,vec2,vec3;
vector<int>::iterator it;
main()
{
	scanf("%d%d",&n,&m);
	for(c=0;c<n;c++)
	{
		scanf("%d",&x);
		vec.push_back(x+999);
	}
	for(c=0;c<m;c++)
	{
		scanf("%d",&x);
		vec2.push_back(x);
	}
	sort(vec.begin(),vec.end());
	for(c=0;c<m;c++)
	{
		x=vec2[c];
		it=lower_bound(vec.begin(),vec.end(),x);
		if(it!=vec.end()&&*it==x)
		{
			//printf(">>%d\n",*it);
			vec3.push_back(x);
		}
	}
	if(vec3.size()==0)
	{
		printf("No\n");
		return 1-1;
	}
	printf("%d\n",vec3.size());
	for(c=0;c<vec3.size();c++)
	{
		printf("%d\n",vec3[c]);
	}
}
