#include<bits/stdc++.h>
using namespace std;
int n,c,c2;
int vec[50];
void gen(int lv);
main()
{
	scanf("%d",&n);
	gen(0);
}
void gen(int lv)
{
	if(lv==n)
	{
		for(c2=0;c2<n;c2++)
		printf("%d",vec[c2]);
		printf("\n");
		return;
	}
	else
	{
			
			vec[lv]=0;
			gen(lv+1);
			vec[lv]=1;
			gen(lv+1);
	}
}
