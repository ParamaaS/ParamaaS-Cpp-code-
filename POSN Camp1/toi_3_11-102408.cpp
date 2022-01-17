#include<stdio.h>
#include<string.h>
char s[1000005];
int re3,re11;
main()
{
    scanf("%s",s);
    int len=strlen(s);
    int re3=0,re11=0;
for(int i=0;i<len;i++)
{
    re3*=10;
    re3+=(s[i]-'0');
    re3%=3;
    
    re11*=10;
    re11+=(s[i]-'0');
    re11%=11;
}
printf("%d ",(((re3)%3)+3)%3);
printf("%d",(((re11)%11)+11)%11);


}
