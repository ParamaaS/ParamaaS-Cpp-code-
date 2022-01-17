#include<stdio.h>
#include<string.h>
char s[200];
int n,c,len,c2,rem;
main()
{
	gets(s);
	len=strlen(s);
		for(c2=0;c2<len/2;c2++)
		{
			rem=s[c2];
			s[c2]=s[len-c2-1];
			s[len-c2-1]=rem;
		}
		for(c2=0;c2<len;c2++)
		{
			rem=s[c2];
            if(rem==' ')
			{
                rem=' ';
            }
			else if(rem<='Z')
			{
                rem=rem-'A';
				rem+=len;
				rem=rem%26;
				rem=rem+'A';
			}
			else if(rem>='a')
			{
				rem=rem-'a';
				rem+=len;
				rem=rem%26;
				rem=rem+'a';
			}
			s[c2]=rem;
		}
	printf("%s",s);	
	scanf(" ");
}
