#include<bits/stdc++.h>
using namespace std;
char s[20];
int idx,c,len;
main()
{
	scanf("%s",s);
	len=strlen(s);
	for(c=0;c<len;c++)
	{
		if(s[c]=='A'||s[c]=='B'||s[c]=='C')
		{
			idx+=2;
		}
		if(s[c]=='D'||s[c]=='E'||s[c]=='F')
		{
			idx+=3;
		}
		if(s[c]=='G'||s[c]=='H'||s[c]=='I')
		{
			idx+=4;
		}
		if(s[c]=='J'||s[c]=='K'||s[c]=='L')
		{
			idx+=5;
		}
		if(s[c]=='M'||s[c]=='N'||s[c]=='O')
		{
			idx+=6;
		}
		if(s[c]=='P'||s[c]=='Q'||s[c]=='R'||s[c]=='S')
		{
			idx+=7;
		}
		if(s[c]=='T'||s[c]=='U'||s[c]=='V')
		{
			idx+=8;
		}
		if(s[c]=='W'||s[c]=='X'||s[c]=='Y'||s[c]=='Z')
		{
			idx+=9;
		}
	}
	idx+=len;
	printf("%d",idx);
}

