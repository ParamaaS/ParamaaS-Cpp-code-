#include<bits/stdc++.h>
using namespace std;
char s[205];
int c,idx,rem;
main()
{
	scanf("%s",s);
	for(c=0;c<strlen(s);c++)
	{
		if(s[c]=='(')
		{
			idx++;
		}
		else if(s[c]==')')
		{
			idx--;
		}
		if(idx<0)
		{
			rem++;
			idx=0;
		}
	}
	rem+=idx;
	printf("%d",rem);
}
