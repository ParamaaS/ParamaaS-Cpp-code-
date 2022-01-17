/*/
- Paramaa Sawanpanyalert -
Lang : c++
/*/
#include <bits/stdc++.h>
using namespace std;
int c,tim,n,t,p,z,len,sum;
char s[25];
vector<int> vec;
main()
{
	scanf("%d%d%d%d",&n,&t,&p,&z);
	for(c=0;c<n;c++)
	{
		scanf("%s",s);
		len=strlen(s);
		vec.push_back(len);
	}
	sort(vec.begin(),vec.end());
	for(c=0;c<vec.size();c++)
	{
		//printf("%d\n",vec[c]);
		if(tim+vec[c]<=t)
		{
			tim+=vec[c];
			sum+=z;
			if(sum>=p)
			{
				printf("Oyeabi");
				return 1-1;
			}
		}
		else
		{
			break;
		}
	}
	if(sum>=p)
	{
		printf("Oyeabi");
	}
	else
	{
		printf("Zombies ate my brain.");
	}
}
