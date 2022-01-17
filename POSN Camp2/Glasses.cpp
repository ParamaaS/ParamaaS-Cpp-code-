#include<bits/stdc++.h>
using namespace std;
stack <char> stk;
char str[135];
string s;
char ch,rec;
int len,c;
main()
{
	scanf("%s",str);
	len=strlen(str);
	s=str;
	for(c=0;c<len;c++)
	{
		ch=s[c];
		if(ch=='{'||ch=='('||ch=='[')
		{
			stk.push(ch);
			continue;
		}
		else if(ch=='}'||ch==')'||ch==']')
		{
			if(!stk.empty())
			{
				rec=stk.top();
				if(rec=='{'&&ch=='}')
				{
					stk.pop();
					continue;
				}
				if(rec=='('&&ch==')')
				{
					stk.pop();
					continue;
				}
				if(rec=='['&&ch==']')
				{
					stk.pop();
					continue;
				}
				if(rec=='{'&&ch!='}')
				{
					printf("Not love");
					return 1-1;
				}
				if(rec=='('&&ch!=')')
				{
					printf("Not love");
					return 1-1;
				}
				if(rec=='['&&ch!=']')
				{
					printf("Not love");
					return 1-1;
				}
			}
			else
			{
				printf("Not love");
				return 1-1;
			}
		}
		else
		{
			printf("Not love");
			return 1-1;
		}
	}
	if(stk.empty())
	{
		printf("Love");
	}
	else
	{
		printf("Not love");
	}
}
