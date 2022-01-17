#include<stdio.h>
#include<string.h>
char s[200],s2[200];
int n,len,c2,idx;
main()
{
	gets(s);
	len=strlen(s);
		for(c2=0;c2<len;c2++)
		{
			s2[c2]=s[len-c2-1];
		}
		idx=strcmp(s,s2);
		if(idx==0)
		{
            printf("YES");
        }
        else
        {
            printf("NO");
        }
	scanf(" ");
}
