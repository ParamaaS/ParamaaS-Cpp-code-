/*/
- Paramaa Sawanpanyalert -
Lang : c++
/*/
#include<bits/stdc++.h>
using namespace std;
#define X first
#define Y second
#define mp make_pair
#define pb push_back
int t,w,h,a,m,mc,c,rr,cc,c2,c3,sm;
int ar[305][305],dp[305][305],wo[305],ms[305];
///vector<int> vec;
main()
{
    scanf("%d",&t);
    while(t--)
    {
    	mc=0;
        memset(dp,0,sizeof dp);
        mc=0;
        scanf("%d%d%d%d",&w,&h,&a,&m);
        for(c=1;c<=h;c++)
        {
            for(c2=1;c2<=w;c2++)
            {
			   ar[c][c2]=0;
            }
        }
        for(c=0;c<m;c++)
        {
            scanf("%d%d",&rr,&cc);
            ar[rr][cc]=1;
        }
        /*/
        for(c=1;c<=h;c++)
        {
            for(c2=1;c2<=w;c2++)
            {
                printf("%d ",ar[c][c2]);
            }
            printf("\n");
        }
        printf("\n");//*/
        for(c=1;c<=h;c++)
        {
            for(c2=1;c2<=w;c2++)
            {
                dp[c][c2]=ar[c][c2]+dp[c][c2-1];
            }
        }
		/*/
		for(c=1;c<=h;c++)
        {
            for(c2=1;c2<=w;c2++)
            {
                printf("%d ",dp[c][c2]);
            }
            printf("\n");
        }
		printf("\n");//*/
        for(c=1;c<=w;c++)
        {
            for(c2=c;c2<=w;c2++)
            {
                memset(wo,0,sizeof wo);
                memset(ms,0,sizeof ms);
                sm=0;
                for(c3=1;c3<=h;c3++)
                {
                    ///wo[c3]=dp[c2][c3]-dp[c-1][c3];
                    wo[c3]=dp[c3][c2]-dp[c3][c-1];
                    ///printf("%d ",wo[c3]);
                }
                ///printf("\n");
                for(c3=1;c3<=h;c3++)
                {
                    ms[c3]=ms[c3-1]+1;
                    if(wo[c3]!=0)
                        ms[c3]=0;
                    else
					{
						///printf(".%d\n",ms[c3]*(c2-c));
						mc=max(mc,ms[c3]*(c2-c+1));
						///vec.pb(ms[c3]);
					}
                }
            }
        }
        ///printf(">%d\n",mc);
        if(mc>=a)
			printf("yes\n");
		else
			printf("no\n");
    }
}
