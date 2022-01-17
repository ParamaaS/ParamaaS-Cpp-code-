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
long long n,t,c,sm;
long long ar[100005];
long long f(long long lv);
main()
{
	scanf("%lld",&t);
	ar[0]=1;
	ar[1]=1;
	ar[2]=2;
	ar[3]=3;
	for(c=3;c<=100000;c++)
	{
		ar[c]=(ar[c-1]%2133134135+ar[c-2]%2133134135)%2133134135;
	}
	while(t--)
	{
		scanf("%lld",&n);
		printf("%lld\n",((ar[n]%2133134135)*2)%2133134135);
	}
}/*/
long long f(long long lv)
{
	sm++;
	if(ar[lv])
		return ar[lv];
	if(lv<=1)
		return ar[lv]=1;
	if(lv==2)
		return ar[2]=2;
	if(lv==3)
		return ar[3]=3;
	return ar[lv]=(f(lv-1)%2133134135+f(lv-2)%2133134135)%2133134135;
}/*/
