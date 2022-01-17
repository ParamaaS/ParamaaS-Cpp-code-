#include<stdio.h>
#include<math.h>
int n,a[505],c,c2,idx,tf;   
main()
{
	scanf("%d",&n);
	for(c=0;c<n;c++)
	{
		scanf("%d",&a[c]);
	}
	
	for(c=0;c<n;c++)
	{
		for(c2=c+1;c2<n;c2++)
		{
			if(a[c]==a[c2])
			{
			idx++;
			}
			if(idx>=2)
			{
			tf=1;
			break;
			}	
		
		}
			idx=0;
		/*if(idx>=3)
			{
			tf=1;
			break;
			}*/
	
	}
	if(tf==1)
	{
		printf("TAK");
	}
	else
	{
		printf("NIE");
	}
}         
