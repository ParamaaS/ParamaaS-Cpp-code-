#include<bits/stdc++.h>
using namespace std;
vector <int> vec;
int n,idx;
main()
{
	while(scanf("%d",&n)!=EOF)
	{
		vec.push_back(n);	
	}
	//printf("%d",idx);
	sort(vec.begin(),vec.end());
	for(int c=0;c<vec.size();c++)
	{
		printf("%d\n",vec[c]);
	}
}
