/*/
- Paramaa Sawanpanyalert -
Lang : c++
/*/
#include <bits/stdc++.h>
using namespace std;
long long n,arr[1500005],m,re;
long long func(long long lv);

main()
{
	scanf("%d",&n);
	for(long long c=0;c<n;c++)
	{
		scanf("%d",&m);
		re=func(m);
		printf("%d\n",re);
	}
}
long long func(long long lv)
{
	if(arr[lv])
	{
		return arr[lv];
	}
	if(lv==1)
	{
		return 2552;
	}
	if(lv==2)
	{
		return 2553;
	}
	if(lv%2==0)
	{
		return arr[lv]=(max(func(lv-1),func(lv-2))+1);
	}
	if(lv%2!=0)
	{
		return arr[lv]=(min(func(1),func(2))+1);
	}
}
/*/
test case
4 
1
2
3
4
/*/
