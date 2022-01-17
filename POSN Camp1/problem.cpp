#include<stdio.h>
#include<string.h>
int len,c,idx,idx2;
char s[165];
main()
{
	//freopen("output.txt","w",stdout);
	while(gets(s))
	{
		if(s[0]=='0')
		{
			break;
		}
		len=strlen(s);
		for(c=0;c<len;c++)
		{
			 if(s[c]=='a'||s[c]=='e'||s[c]=='i'||s[c]=='o'||s[c]=='u'||s[c]=='A'||s[c]=='E'||s[c]=='I'||s[c]=='O'||s[c]=='U')
			{
				if(idx!=1)
				{
				idx=2;
				}
			}
			if(s[c]>='0'&&s[c]<='9')
			{
				idx=1;
				idx2++;
			}
		}
		if(idx==0)
		{
			printf("%s\n","Alphabet Agent");
			idx=0;
			idx2=0;
			continue;
		}
		else if(idx==1)
		{
			printf("%s ","Agent");
			for(c=0;c<idx2;c++)
			{
				printf("%c",'X');
			}
			printf("\n");
			idx=0;
			idx2=0;
			continue;
		}
		else //if(idx==0)
		{
			printf("Secret Agent\n");
				idx=0;
				idx2=0;
		}
		idx=0;
		idx2=0;
	}
	printf("END");
	
}
