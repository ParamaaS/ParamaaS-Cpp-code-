#include<bits/stdc++.h>
using namespace std;
#define X first
#define Y second
#define pb push_back
#define mp make_pair
long long n,ar[65][15];
long long dp(long long fl,long long al)
{
    if(fl > n){
        return 0;
    }
    if(ar[fl][al]!=-1)
        return ar[fl][al];
    if(al==0)
    {
        if(fl==0)
            return ar[fl][al]=1;
        if(fl==1)
            return ar[fl][al]=dp(fl-1,0);
        if(fl==2)
            return ar[fl][al]=dp(fl-2,0)+dp(fl-1,0);
        return ar[fl][al]=dp(fl-1,0)+dp(fl-2,0)+dp(fl-3,0);
    }
    if(al==1)///mai dai toi lang
    {
        if(fl==0)
            return ar[fl][al]=1+dp(fl+1,0);
        if(fl==1)
            return ar[fl][al]=dp(fl-1,1)+dp(fl+1,0);
        if(fl==2)
            return ar[fl][al]=dp(fl-2,1)+dp(fl-1,1)+dp(fl+1,0);
        return ar[fl][al]=dp(fl-1,1)+dp(fl-2,1)+dp(fl-3,1)+dp(fl+1,0);

    }
    return 0;
}
main()
{
    memset(ar,-1,sizeof ar);
    scanf("%lld",&n);
    printf("%lld\n",dp(n,1));

}
