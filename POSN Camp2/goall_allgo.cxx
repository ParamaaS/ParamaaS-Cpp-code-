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
int n,c,c2,cc,go,com,idx;
int ar[55][55];
char s[55][55];
main()
{
    while(scanf("%d",&n)!=EOF)
	{
		go=0;
		com=0;
		for(c=0;c<n;c++)
			scanf("%s",s[c]);
		for(c=0;c<n;c++)
		{
			for(c2=0;c2<n;c2++)
			{
				ar[c][c2]=s[c][c2]-'0';
			}
		}
		for(cc=0;cc<n;cc++)
		{
			for(c=0;c<n;c++)
			{
				for(c2=0;c2<n;c2++)
				{
					//*/
					if(c==c2)
						continue;
					//*/
					if(ar[c][cc]==1&&ar[cc][c2]==1)
						ar[c][c2]=1;
				}
			}
		}
		for(c=0;c<n;c++)
		{
			idx=0;
			for(c2=0;c2<n;c2++)
			{
				if(ar[c][c2] || c==c2)
					idx++;
			}
			if(idx==n)
				go++;
		}
		for(c=0;c<n;c++)
		{
			idx=0;
			for(c2=0;c2<n;c2++)
			{
				if(ar[c2][c] || c==c2)
					idx++;
			}
			if(idx==n)
				com++;
		}
		/*/
		printf("\n");
		for(c=0;c<n;c++)
		{
			for(c2=0;c2<n;c2++)
			{
				printf("%2d",ar[c][c2]);
			}
			printf("\n");
		}//*/
		printf("%d %d\n",go,com);
	}
}
