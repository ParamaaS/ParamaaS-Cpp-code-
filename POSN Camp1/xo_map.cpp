#include<stdio.h>
#include<string.h>
int n,c,c2,idx=1,rem;
char s[26][26];
main()
{
	scanf("%d",&n);
	for(c=0;c<n;c++)
	{
		scanf("%s",s[c]);
	}
	for(c=0;c<n;c++)
	{
		for(c2=0;c2<n;c2++)
		{
			if(s[c][c2]=='x')
			{
				s[c][c2]=0;
			}
			else if(s[c][c2]=='o')
			{
				s[c][c2]=1;
			}
		}
	}
	/*/
	for(c=0;c<n;c++)
	{
		for(c2=0;c2<n;c2++)
		{
			printf("%d",s[c][c2]);
		}
		printf("\n");
	}
	/*/
	for(c=0;c<n;c++)
	{
		rem=0;
		for(c2=0;c2<n;c2++)
		{
			rem=0;
				if(s[c][c2-1]==1)
				{
					rem++;		
				}
				if(s[c][c2+1]==1)
				{
					rem++;		
				}
				if(s[c-1][c2]==1)
				{
					rem++;		
				}
				if(s[c+1][c2]==1)
				{
					rem++;		
				}
				if(rem%2==0)
				{
					idx=1;
				}
				else if(rem%2!=0)
				{
					idx=0;
					break;
				}
		}
		if(rem%2!=0)
		{
			idx=0;
			break;
		}
	}
	if(idx==1)
	printf("YES");
	else if(idx==0)
		{
			printf("NO");
		}
}