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
int n,k,x,kk,c,co;
priority_queue<int> pq;
//int ar[1000005];
/*/
map<int,int> ar;
map<int,int>::iterator it;/*/
main()
{
	scanf("%d%d",&n,&k);
	for(c=0;c<n;c++)
	{
		scanf("%d",&x);
		pq.push(-x);
		//ar[x]++;
	}
	while(co!=k)
	{
		x=-pq.top();
		pq.pop();
		co++;
	}
	printf("%d\n",x);/*/
	kk=k;
	it=ar.begin();
	while(kk>0||it!=ar.end())
	{
		if(ar.find(c)==ar.end())
			continue;
		it=upper_bound(ar.begin(),ar.end(),it->first);
		kk-=ar[c];
		if(kk==0||kk<0)
		{
			printf("%d\n",c);
			break;
		}
	}/*/
}
