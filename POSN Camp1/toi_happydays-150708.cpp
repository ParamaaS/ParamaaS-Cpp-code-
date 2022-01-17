#include<stdio.h>
int a,c,b[305],idx,dc[305],idx2,sk[305];
main()
{
    scanf("%d",&a);
	for(c=1;c<=a;c++)
	{
		scanf("%d",&b[c]);
	}
	for(c=1;c<=a;c++)
	{
		if(b[c]>=80)
		{
			dc[idx]=b[c];
			idx++;
			continue;
		}
		if(c!=1)
		{
		  if(b[c]>=20&&b[c]-b[c-1]>=10)
		  {
			 dc[idx]=b[c];
			 idx++;
			 continue;
		  }
        }
	}
	/*/
	for(c=0;c<305;c++)
	{
		if(dc[c]!=0)
		{
			sk[dc[c]]++;
			printf("%d ",dc[c]);
		}
	}
	for(c=0;c<305;c++)
	{
		if(sk[c]>=1)
		{
			idx2++;
		}
	}
	/*/
printf("%d",idx);

scanf(" ");
}
