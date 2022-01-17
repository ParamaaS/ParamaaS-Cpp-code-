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
int len,c,t,sm,ssm,c2,nw,st,en;
char s[2005];
int ar[15],bo;
int tmp[15];
char asw[]={'D','R','M','F','S','L','T'};
vector<int> vec,vec2;
main()
{
    scanf("%d",&t);
    while(t--)
	{
		memset(ar,0,sizeof ar);
		memset(tmp,0,sizeof tmp);
		scanf("%s",&s);
		sm=0;
        vec.clear();
        vec2.clear();
        bo=true;
        for(c=0;s[c];c++)
		{
			if(s[c]=='D')
				ar[0]++;
			else if(s[c]=='R')
				ar[1]++;
			else if(s[c]=='M')
				ar[2]++;
			else if(s[c]=='F')
				ar[3]++;
			else if(s[c]=='S')
				ar[4]++;
			else if(s[c]=='L')
				ar[5]++;
			else if(s[c]=='T')
				ar[6]++;
			else
                bo=false;
			sm++;
		}
        for(c=0;c<=6;c++)
		{
            ///begin start
			ssm=0;
            st=c;
            en=-1;
            for(c2=0;c2<=6;c2++)
                tmp[c2]=ar[c2];
			for(c2=0;c2<sm;c2++)
			{
                nw=(c+c2)%7;
                en=nw;
                if(tmp[nw])
				{
					ssm++;
                    tmp[nw]--;
				}
				else
				{
					break;
				}
			}
			if(ssm==sm&&en!=-1)
			{
                vec.pb(st);
                vec2.pb(en);
			}
			else
				continue;
		}
        if(vec.empty()||(!bo))
		{
            printf("NO\n");
            continue;
		}
        if(vec.size()==1)
		{
            printf("YES %c %c\n",asw[vec[0]],asw[vec2[0]]);
			continue;
		}
		else
		{
            printf("YES MANY\n");
            continue;
		}
	}
}
