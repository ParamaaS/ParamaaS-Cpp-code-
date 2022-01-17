#include <stdio.h>
#include<math.h>
main(){
       int n,i,i2,i3=0,i4,a[1000],max=0,min,idx;
       scanf("%d",&n);
       i2=sqrt(n);     //Find root n
       for(i=1;i<=i2;i++)
	   { 
            if(n%i==0)  
			{  //check can divisible 
            	//for(i3=1;i3<=i2;i3++){  
                    a[i3]=i;
                    i3++;
                    if(n/i!=i)
                    {
					a[i3]=n/i;    //last edit is printf("%d",a[i]);
					i3++;
					}
            } //}            
        }
        min=n;
        for(i4=0;i4<i3;i4++)
        {
        	min=n;
        	for(i2=0;i2<i3;i2++)//findmin
        	{
				if(a[i2]<min)
				{
					min=a[i2];
					idx=i2;
				}
			}	
			printf("%d\n",min);
			a[idx]=n+1;
		}
		

		
	//		printf("%d\n",a[i4]); 
        scanf("");                                     
       }
