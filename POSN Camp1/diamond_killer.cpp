#include<stdio.h>
int n,s[100],m,c,c2,idx,mc,sum,rem;
main()
{
	scanf("%d",&n);
	for(c=0;c<n;c++)
	{
		scanf("%d",&m);
		sum+=m*2-1;
		for(c2=1;c2<=m;c2++)
		{
			
			s[idx]=c2;
			idx++;
		}
		for(c2=m-1;c2>=1;c2--)
		{
			s[idx]=c2;
			idx++;
		}
		if(m>mc)
		{
			mc=m;
		}
	}
	for(c=mc;c>0;c--)
	{
		for(c2=0;c2<sum;c2++)
		{
			if(s[c2]<c)
			{
				printf(".");
			}
			else if(s[c2]==c)
			{
				if(c2+65<=90)
				printf("%c",c2+65);
				else
				{
					rem=c2;
					rem%=26;
					rem+=65;
					printf("%c",rem);
				}
			}
			else if(s[c2]>c)
			{	
				printf("@");
			}
		}
		printf("\n");
	}
	for(c=2;c<=mc;c++)
	{
		for(c2=0;c2<sum;c2++)
		{
			if(s[c2]<c)
			{
				printf(".");
			}
			else if(s[c2]==c)
			{
				if(c2+65<=90)
				printf("%c",c2+65);
				else
				{
					rem=c2;
					rem%=26;
					rem+=65;
					printf("%c",rem);
				}
			}
			else if(s[c2]>c)
			{
				printf("@");
			}
		}
		printf("\n");
	}
}
