#include<bits/stdc++.h>
using namespace std;
int n,k,c,m,c2,rem;
int s[100005];
vector<int> aha;
vector<int>::iterator it,it2;
main()
{
	scanf("%d %d",&n,&k);
	for(c=0;c<n;c++)
	{
		scanf("%d",&s[c]);
		rem+=s[c];
		aha.push_back(rem);
	}
	sort(aha.begin(),aha.end());
	for(c=0;c<k;c++)
	{
		scanf("%d",&m);
		rem=0;
		it=upper_bound(aha.begin(),aha.end(),m);
		it2=aha.begin();
		printf("%d\n",it-it2);
	}	
}
