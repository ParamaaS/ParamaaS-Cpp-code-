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
int t,n,c,c2,mn,mc,sm,nn;
string s,smc,smn,ss;
main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		s="";
		ss="";
		smn="",smc="";
		mc=0;
		mn=1000000000;
		if(n<=10)
		{
			printf("%d %d\n",n,n);
			continue;
        }
        if(n==100||n==1000||n==10000)
        {
			printf("%d %d\n",n,n);
			continue;
        }
        if(n==100000||n==1000000||n==10000000||n==100000000)
        {
			printf("%d %d\n",n,n);
			continue;
        }
		nn=n;
        while(nn>0)
        {
			s+=nn%10+'0';
			nn/=10;
        }
        reverse(s.begin(),s.end());
        for(c=0;c<s.size();c++)
        {
			for(c2=0;c2<s.size();c2++)
			{
                ss=s;
                swap(ss[c],ss[c2]);
                if(ss[0]=='0')
					continue;
				stringstream strs;
				strs<<ss;
				strs>>sm;
				if(sm<mn)
				{
					smn=ss;
					mn=sm;
				}
				if(sm>mc)
				{
					smc=ss;
                    mc=sm;
				}
			}
        }
        printf("%s %s\n",smn.c_str(),smc.c_str());
	}
}
