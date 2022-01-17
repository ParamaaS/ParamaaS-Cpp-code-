#include<stdio.h>
#include<string.h>
int idx,c,fk1,fk2,asw;
char str1[140],str2[140];
main()
{
    scanf("%s",str1);
    scanf("%s",str2);
    idx=strlen(str1);
    for(c=0;c<idx;c++)
    {
    	fk1=str1[c];
    	fk1=fk1-'0';
    	fk2=str2[c];
    	fk2=fk2-'0';
    	asw=fk1-fk2;
    	printf("%d",asw);
    	asw=0;
    	fk1=0;
    	fk2=0;
         //*/
    }
}
