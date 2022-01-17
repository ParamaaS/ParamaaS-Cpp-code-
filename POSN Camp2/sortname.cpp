#include<bits/stdc++.h>
using namespace std;
int x,c,r,c2,c3,rem;
char s[22];
string str[100005],ss;
main()
{
	scanf("%d",&x);
	for(c=0;c<x;c++)
	{
		scanf("%d",&r);
		for(c2=0;c2<r;c2++)
		{
			scanf("%s",s);
			str[c2]=s;
		}
		sort(&str[0],&str[c2]);
		printf("Case %d:\n",c+1);
		for(c2=0;c2<r;c2++)
		{
			if(str[c2]!=str[c2+1])
			{
				printf("%s",str[c2].c_str());
			//	for(c3=0;c3<str[c2].size();c3++)
				printf("\n");
			}
		}
	}
}
