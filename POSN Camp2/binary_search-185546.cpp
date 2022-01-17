#include<bits/stdc++.h>
using namespace std;
int c,n,m,na,st,en,c2;
int i,rem,s,en2,st2;
vector<int> vec;
main()
{
	scanf("%d%d",&na,&m);
	for(c=0;c<na;c++)
	{
		scanf("%d",&n);
		vec.push_back(n);
	}
	for(c=0;c<m;c++)
	{
		scanf("%d",&rem);
		i=0;
		st=0;
		en=na-1;
		bool found=false;
		while(st<=en)
		{
			int mid=(st+en)/2;
			if(vec[mid]==rem)
			{
				found=true;
				break;
			}
			else if(vec[mid]<rem)
			{
				st=mid+1;
			}
			else if(vec[mid]>rem)
			{
				en=mid-1;
			}
			/*/
			if(vec[(st+en)/2]>rem)
			{
				st=0;
				en=(st+en)/2;
			}
			if(vec[(st+en)/2]>rem)
			{
				st=(st+en)/2;
				en=st+en;
			}
			if(vec[(st+en)/2]==rem)
			{
				printf("1\n");
				i=1;
				break;
			}	
			/*/
		}
		if(found)
		{
			printf("1\n");
		}
		else
		{
			printf("0\n");
		}
	}
}
