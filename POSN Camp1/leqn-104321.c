#include <stdio.h>
int a,b;
main()
{
    
    scanf("%d %d",&a,&b);
    if(a==0&&b==0)
	{
       	printf("NIESKONCZONOSC");
    }
    //*/
	else if((a==0%b!=0)||(b%a!=0))
	{
    	printf("0");
    }//*/
    else
	{
    	printf("1");
    }                                 
}
