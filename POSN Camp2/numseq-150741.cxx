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
string s;
char arc[15];
int i,t,n;
vector<long long > vec;
main()
{
	vec.pb(1);
	for(i=1;;i++)
	{
		if((long long)vec.back()+s.size()>2147483647)
			break;
		vec.pb((long long)vec.back()+s.size());
        sprintf(arc,"%d",i);
        for(int c=0;arc[c];c++)
        {
			s+=arc[c];
        }
	}
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		if(n==1)
		{
			printf("1\n");
			continue;
		}
		n-=*(lower_bound(vec.begin(),vec.end(),n)-1);
		printf("%c\n",s[n]);
	}
}
