#include<bits/stdc++.h>
using namespace std;
int t,c,len,len2,c2,cc,rem,rem2;
char s[100005],ss[100005];
char *p;
main()
{
	scanf("%d",&t);
	for(c=0;c<t;c++)
	{
		scanf("%s",s);
		scanf("%s",ss);
		len=strlen(s);
		len2=strlen(ss);
		rem2=0;
		rem=0;
		p=strstr(ss,s);
		if(p)
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");	
		}
		if(len==len2)
		{
			if(!strcmp(s,ss))
			{
				printf("YES\n");
				//continue;
			}
			else
			{
				printf("NO\n");
				//continue;
			}
		}
	}
}

