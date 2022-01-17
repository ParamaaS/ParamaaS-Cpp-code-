#include<stdio.h>
int a[2000][1000],n,d,c,z,suma,sumb;
main()
{ 
    scanf("%d",&d);
    for(z=0;z<d;z++)
    {
    	scanf("%d",&n);
    	for(c=0;c<n;c++)
    		{
    		scanf("%d",&a[z][c]);
    		}
    	for(c=0;c<n;c++)
    		{
    		suma=suma+a[z][c];
			}
			 printf("%d\n",suma);
			 suma=0;
    	//scanf("%d",&i);
    	/*for(c=0;c<i;c++)
    		{
    		scanf("%d",&b[c+1]);
    		}*/
    }
    /*for(z=0;z<d;z++)
    {
    for(c=0;c<n;c++)
    	{
    	suma=suma+a[z][c];
    	}
    //for(c=0;c<n;c++)
    //	{
    //	sumb=sumb+b[c];
    //	} 
    printf("%d\n",suma);
   // printf("%d,sumb);
	}*/
}
