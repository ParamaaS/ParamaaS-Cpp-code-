#include<bits/stdc++.h>
using namespace std;
int m,n,dp[1005],c2,mc,m2,mc3;
vector<int> vec;
void gen(int lv);
main()
{
	scanf("%d",&n);
	vec.push_back(1000005);
	for(int c=0;c<n;c++)
	{
		scanf("%d",&m);
		vec.push_back(m);
	}
	dp[1]=1;
	for(int c=2;c<=n;c++)
	{
		m2=vec[c];
		mc=0;
		for(c2=1;c2<c;c2++)
		{
			if(m2>vec[c2])
			{
				mc=max(mc,dp[c2]);
			}
		}
		dp[c]=mc+1;
	}
	for(int c=1;c<=n;c++)
	{
		mc3=max(mc3,dp[c]);
	}
	printf("%d",mc3);
}

