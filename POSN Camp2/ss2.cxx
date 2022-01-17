#include<bits/stdc++.h>
using namespace std;
#define X first
#define Y second
#define pb push_back
#define mp make_pair
int n,k,st,en,mid,sm,ok,c,c2,d,mc;
///vector<int> vec,dp;
int ar[1505],dp[1505];
main()
{
    scanf("%d%d",&n,&k);
    for(c=1;c<=n;c++)
    {
        scanf("%d",&ar[c]);
    }
    for(c=1;c<=n;c++)
    {
        dp[c]=dp[c-1]+ar[c];
    }
    for(c2=0;c2<k;c2++)
    {
        st=0;
        en=((n/2)+1)*2;
        mc=0;
        scanf("%d",&d);
        while(st<=en)
        {
            mid=(st+en)/2;
            ok=0;
            for(c=0;c+mid<=n;c++)
            {
                sm=dp[c+mid]-dp[c];
                if(sm<=d)
                {
                	///printf(">>%d<=%d %d %d %d\n",sm,d,mid,dp[c+mid],dp[c-1]);
                    ok=1;
                    break;
                }
            }
            if(ok)
            {
                mc=max(mc,mid);
                st=mid+1;
            }
            else
                en=mid-1;
        }
        printf("%d\n",mc);
    }
}
