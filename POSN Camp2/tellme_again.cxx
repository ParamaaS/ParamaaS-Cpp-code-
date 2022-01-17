/*/
- Paramaa Sawanpanyalert -
Lang : c++
/*/
#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
#define mp make_pair
#define pb push_back
int t,c,tmp1,tmp2,len1,len2,asw,bas;
char s1[100005],s2[100005],st;
int change_(char ch)
{
	int x;
    if('A'<=ch&&ch<='Z')
		x=ch-'A'+1;
	if('0'<=ch&&ch<='9')
		x=ch-'0'+27;
	if('a'<=ch&&ch<='z')
		x=ch-'a'+37;
	return x;
}
main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s%s",s1,s2);
		tmp1=0;
		tmp2=0;
		asw=0;
        len1=strlen(s1);
        len2=strlen(s2);
        bas=1;
		for(c=0;s1[c];c++)
		{
			///printf("%c %d\n",s1[c],change_(s1[c]));
            tmp1+=change_(s1[c]);
            tmp1*=11;

		}
		for(c=0;c<len1;c++)
		{
            tmp2+=change_(s2[c]);
            tmp2*=11;
			bas*=11;
		}
        if(tmp1==tmp2)
			asw++;
		for(c=len1;s2[c];c++)
		{
            st=s2[c-len1];
            tmp2-=(change_(st)*bas);
            tmp2+=change_(s2[c]);
            tmp2*=11;
            ///printf(".%c %c %d\n",st,s2[c],c);
			if(tmp1==tmp2)
				asw++;
		}
		printf("%d\n",asw);
	}
}
