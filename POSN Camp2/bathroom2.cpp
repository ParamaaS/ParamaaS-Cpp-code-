/*/
- Paramaa Sawanpanyalert -
Lang : c++
/*/
#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
#define mp make_pair
int n,m,d,st,en,mid,sm,mi,c,mn=1000000000;
bool chk=false;
vector<int> vec;
main()
{
	scanf("%d%d",&n,&m);
	for(c=0;c<n;c++)
	{
		scanf("%d",&d);
		vec.push_back(d);
	}
	st=0;
	en=100000;
	while(st<=en)
	{
		mid=(st+en)/2;
		if(st+en%2==1)
			mid++;
		sm=0;
		//printf("%d %d %d\n",mid,st,en);
		for(c=0;c<n;c++)
		{
			sm+=(mid/vec[c]);
		}
		if(sm==m)///st==en
		{
			//mi=mid;
			//mn=min(mn,mid);
			//printf("%d\n",mid-1);
			//return 1-1;
			chk=true;
		}
		else if(sm<m)///st<en
		{
			st=mid+1;
		}
		else if(sm>m)///st>en
		{
			en=mid-1;
		}
		else if(chk)
		{
			break;
		}

	}
	/*/
	mi=mid;
	chk=true;
	while(chk)
	{
		sm=0;
		for(c=0;c<m;c++)
		{
			sm+=(mi/vec[c]);
		}
		if(sm>n)
		{
			break;
		}
		mi++;
		//printf("%d %d\n",mi,mid);
	}
	chk=true;
	while(chk)
	{
		sm=0;
		for(c=0;c<m;c++)
		{
			sm+=(mi/vec[c]);
		}
		if(sm<n)
		{
			break;
		}
		mi--;
		//printf("%d %d\n",mi,mid);
	}/*/
	printf("%d\n",mid);
}
