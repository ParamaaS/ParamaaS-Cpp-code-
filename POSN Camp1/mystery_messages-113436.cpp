#include<stdio.h>
#include<string.h>
int n,m,c,c2;
char s[105];
main()
{
	scanf("%d%d",&n,&m);
	for(c=0;c<n;c++)
	{
		scanf("%s",s);
		for(c2=0;c2<m;c2++)
		{
			if(s[0]<'A'||s[0]>'Z')
			{
				if(s[c2]>='A'&&s[c2]<='Z')
				{
					printf("%c",s[c2-1]);
					break;
				}
			}
			 if(s[0]>='A'&&s[0]<='Z')
			{
				printf("%c",s[m-1]);
				break;
			}
		}
	}
}
