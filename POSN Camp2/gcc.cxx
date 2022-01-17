#include<bits/stdc++.h>
using namespace std;
int t,c,len;
long long m,n,nn,sm,now;
string str,str2;
char s[105];
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s%lld",s,&m);
        str=s;
        len=str.size();
        /*/reverse(str.begin(),str.end());
        for(c=0;c<6&&c<str.size();c++)
        {
            nn*=10;
            nn+=str[c]-'0';
        }
        stringstream ss;
        ss<<nn;
        ss>>str2;
        reverse(str2.begin(),str2.end());
        stringstream ss2;
        ss2<<str2;
        ss2>>n;/*/
        nn=0;
        if(len>7)
        {
            /*for(c=len-15;c<len;c++)
            {
                nn*=10;
                nn+=(long long)str[c]-'0';
            }*/
            nn=4123455;
        }
        else
        {
            for(c=0;c<len;c++)
            {
                nn*=10;
                nn+=(long long)str[c]-'0';
            }
        }
        if(m==1)
		{
            printf("0\n");
            continue;
		}
        ///printf("%lld\n",nn);
        now=1;
        sm=1;
        for(long long cc=1;cc<=nn;cc++)
        {
            now*=cc;
            now%=m;
            if(now==0)
                break;
            sm+=now;
            sm%=m;
            ///printf(">%d %lld %lld\n",c,sm,now);
        }
        printf("%lld\n",sm);
    }
}
