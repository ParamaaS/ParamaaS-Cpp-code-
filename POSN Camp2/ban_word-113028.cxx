#include<bits/stdc++.h>
using namespace std;
#define X first
#define Y second
#define pb push_back
#define mp make_pair
long long n;
long long ar[60][10];
long long dp(long long idx,long long ch)
{
    if(ar[idx][ch]!=-1)
        return ar[idx][ch];
    if(idx==1)
        return ar[idx][ch]=1;
    if(ch!=1)/// not a
    {
        return ar[idx][ch]=dp(idx-1,1)+dp(idx-1,2)+dp(idx-1,3);
    }
    else if(ch==1)///is a
    {
        return ar[idx][ch]=dp(idx-1,1)+dp(idx-1,3);
    }
}
main()
{
    memset(ar,-1,sizeof ar);
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==0)
        {
            printf("1\n");
            continue;
        }
        printf("%lld\n",dp(n,1)+dp(n,2)+dp(n,3));
    }
}
