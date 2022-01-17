#include<stdio.h>
#include<string.h>

int a,me[10];
char love;
main()
{
	for(a=0;a<4;a++)
	{
		scanf("%c",&love);
		if(love=='L')
		{
			printf("#  \n#  \n###");
		}
		else if(love=='O')
		{
			printf("###\n# #\n###");
		}
		else if(love=='V')
		{
			printf("# #\n# #\n # ");
		}
		else if(love=='E')
		{
			printf("###\n## \n###");
		}
		printf("\n\n");		
	}


	
	
	
	


}
