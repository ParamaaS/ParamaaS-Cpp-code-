#include<stdio.h>
#include<math.h>
int ab,bc,ac,n[6],c,c2,m[6],rem;
long long sum;
main()
{
	scanf("%d%d%d",&ab,&bc,&ac);
	sum=(long long)ab*bc;
	sum*=ac;
	sum=sqrt(sum);
	n[0]=sum/ab;
	n[1]=sum/bc;
	n[2]=sum/ac;
	//printf("%d %d %d",n[0],n[1],n[2]);
	for(c=2;c>=0;c--)
	{
		for(c2=0;c2<=2;c2++)
		{
			if(m[c]<n[c2])
			{
			m[c]=n[c2];
			rem=c2;
			}
		}
		n[rem]=0;
		rem=0;
	}
	printf("%d %d %d",m[2],m[1],m[0]);
}
