#include<stdio.h>
#include<string.h>
int n,len,c,c2,idx2;
char s[105];
main()
{
	scanf("%d",&n);
	for(c=0;c<n;c++)
	{
		scanf("%s",s);
		len=strlen(s);
		for(c2=0;c2<len;c2++)
		{
			if(s[c2]!='0')
			{
				if(s[c2]==s[c2+1]&s[c2]!=s[c2-1])
				{
					idx2++;
				}
			}
		}
		printf("%d\n",idx2);
		idx2=0;
	}
	
}
