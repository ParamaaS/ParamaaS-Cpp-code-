/*/
- Paramaa Sawanpanyalert -
Lang : c++
/*/
#include <bits/stdc++.h>
using namespace std;
int n,m,aa,bb,cc,len,c,c2;
//char s[25],ch[5];
char s[30][70],s2[30][70],ch[30];
string ss;
map<string,int> mpa,mpb,mpc;
main()
{
	scanf("%d%d",&n,&m);
	for(c=0;c<n;c++)
	{
		scanf("%s %c",s[c],&ch[c]);
	}
	for(c=0;c<m;c++)
	{
		scanf("%s",s2[c]);
	}
	for(c=0;c<n;c++)
	{
		for(c2=0;c2<m;c2++)
		{
			if(!strcmp(s[c],s2[c2]))
			{
				if(ch[c]=='a')
				{
					aa++;
				}
				else if(ch[c]=='b')
				{
					bb++;
				}
				else if(ch[c]=='c')
				{
					cc++;
				}
				break;
			}
		}
	}
	if(aa==4)
	{
		printf("1\n");
	}
	else if(aa<4)
	{
		printf("0\n");
	}
	else
	{
		printf("2\n");
	}
	if(bb==4)
	{
		printf("1\n");
	}
	else if(bb<4)
	{
		printf("0\n");
	}
	else
	{
		printf("2\n");
	}
	if(cc==4)
	{
		printf("1\n");
	}
	else if(cc<4)
	{
		printf("0\n");
	}
	else
	{
		printf("2\n");
	}
	/*/
	for(c=0;c<n;c++)
	{
		scanf("%s",s);
		ss=s;
		scanf("%s",ch);	
		len=strlen(s);
		if(len>15)
		{
			continue;
		}
		if(!strcmp(ch,"a"))
		{
			mpa[ss]=1;
			aa++;
		}
		if(!strcmp(ch,"b"))
		{
			mpb[ss]=1;
			bb++;
		}
		if(!strcmp(ch,"c"))
		{
			mpc[ss]=1;
			cc++;
		}
	}
	for(c=0;c<m;c++)
	{
		scanf("%s",s);
		ss=s;
		if(mpa[ss])
		{
			aaa++;
			mpa[ss]=0;
		}
		if(mpb[ss])
		{
			bbb++;
			mpb[ss]=0;
		}
		if(mpc[ss])
		{
			ccc++;
			mpc[ss]=0;
		}
	}
	if(aaa==4)
	{
		printf("1\n");
	}
	else
	{
		if(aaa>4)
		{
			printf("2\n");
		}
		else if(aaa<4)
		{
			printf("0\n");
		}
	}
	if(bbb==4)
	{
		printf("1\n");
	}
	else
	{
		if(bbb>4)
		{
			printf("2\n");
		}
		else if(bbb<4)
		{
			printf("0\n");
		}
	}
	if(ccc==4)
	{
		printf("1");
	}
	else
	{
		if(ccc>4)
		{
			printf("2");
		}
		else if(ccc<4)
		{
			printf("0");
		}
	}/*/
}
