#include<stdio.h>
#include<string.h>
int n,c,idx,no,noi,fk;
char str[55];
main()
{
    scanf("%d",&n);
    scanf("%s",str);
    idx=strlen(str);
	 no=idx/n;
    //printf("%d %d",idx,no);
    for(c=0;c<idx;c++)
    {
    	fk=str[c];
    	if(fk<65)
    	{
    	fk=fk-48;
    	}
    	else if(fk>=65)
    	{
    		fk=fk-'A';
    		fk=fk+11;
		}
    	 //printf("%x ",fk);
         //*/
		 	if(fk==0)
         	{
        	  printf("....");
        	 	noi++;
      	    }
       		else if(fk==1)
      	    { 
       		  printf("...*");
       		  	noi++;
      	    }
      	    else if(fk==2)
       		{
        		printf("..*.");
        		noi++;
        	}
        	else if(fk==3)
        	{
        		printf("..**");
        		noi++;
      	    }
      	  	else if(fk==4)
      	  	{
      	  		printf(".*..");
      	  		noi++;
       	    }
        	else if(fk==5)
        	{
        		printf(".*.*");
        		noi++;
      	    }
      	    else if(fk==6)
     	    {
     	   		printf(".**.");
     	   		noi++;
     	    }
      		else if(fk==7)
       		{
       		 	printf(".***");
       		 	noi++;
      		}
       	    else if(fk==8)
      	    {
       		 	printf("*...");
       		 	noi++;
      	    }
       		else if(fk==9)
        	{
        		printf("*..*");
        		noi++;
        	}
        	else if(fk==11)
        	{
        		printf("*.*.");
        		noi++;
        	}
        	else if(fk==12)
        	{
        		printf("*.**");
        		noi++;
        	}
       		else if(fk==13)
        	{
        		printf("**..");
        		noi++;
        	}
        	else if(fk==14)
        	{
        		printf("**.*");
        		noi++;
        	}
        	else if(fk==15)
        	{
        		printf("***.");
        		noi++;
        	}
        	else if(fk==16)
        	{
        		printf("****");
        		noi++;
        	}//*/
        	//noi++;
        //	printf(" ");
        	if(noi==no)
			{
				printf("\n");
				noi=0;
			}
    }
    
    
}
