#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
priority_queue <int> pq;
int m,n,a[1800005],b[1800005],mc,c,c2,idx;
main()
{
	scanf("%d",&m);
	for(c=0;c<m;c++)
	{
		scanf("%d",&a[c]);
	}
	scanf("%d",&n);
	for(c=m;c<m+n;c++)
	{
		scanf("%d",&a[c]);
	}
	sort(a,a+m+n);
	for(c=m+n-1;c>=0;c--)
	{
		printf("%d ",a[c]);
	}
	scanf(" ");
}
