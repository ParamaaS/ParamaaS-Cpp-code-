#include<stdio.h>
int n,m[16],c,x,n1;
main()
{
	scanf("%d",&n);
	n1=n;
	m[10]=n1/10000000000;
	n1=n1-m[10]*10000000000;
	m[9]=n1/1000000000;
	n1=n1-m[9]*1000000000;
	m[8]=n1/100000000;
	n1=n1-m[8]*100000000;
	m[7]=n1/10000000;
	n1=n1-m[7]*10000000;
	m[6]=n1/1000000;
	n1=n1-m[6]*1000000;
	m[5]=n1/100000;
	n1=n1-m[5]*100000;
	m[4]=n1/10000;
	n1=n1-m[4]*10000;
	m[3]=n1/1000;
	n1=n1-m[3]*1000;
	m[2]=n1/100;
	n1=n1-m[2]*100;
	m[1]=n1/10;
	n1=n1-m[1]*10;
	m[0]=n1;
	for(c=9;c>=0;c--)
	{
		if(m[c]==0)
		{
			x=c;
		}
		else if(m[c]!=0)
		{
			c=0;
		}
	}
	if(n!=0)
	{
		for(c=0;c<x;c++)
		{
			if(m[c]>=5)
			{
				printf("-O|");
				if(m[c]==5)
				{
				printf("-OOOO");	
				}
				else if(m[c]==6)
				{
				printf("O-OOO");	
				}
				else if(m[c]==7)
				{
				printf("OO-OO");	
				}
				else if(m[c]==8)
				{
				printf("OOO-O");	
				}
				else if(m[c]==9)
				{
				printf("OOOO-");	
				}
			}
			else if(m[c]<5)
			{
				printf("O-|");
				if(m[c]==0)
				{
				printf("-OOOO");	
				}
				else if(m[c]==1)
				{
				printf("O-OOO");	
				}
				else if(m[c]==2)
				{
				printf("OO-OO");	
				}
				else if(m[c]==3)
				{
				printf("OOO-O");	
				}
				else if(m[c]==4)
				{
				printf("OOOO-");	
				}	
			}
			printf("\n");
		}
	}
	else if(n==0)
	{
		printf("O-|-OOOO");
	}
	
}
