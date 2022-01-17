#include<stdio.h>
#include<string.h>
char s[500],cmd[5],x[5],y[5];
int main()
{
    scanf("%s",s);
    while(scanf("%s",cmd))
    {
        if(cmd[0]=='N')
            break;

        if(cmd[0]=='Z')
        {
            scanf("%s%s",x,y);
            int len=strlen(s);
            ///for(int i=0;s[i]!='\0';i++)
            for(int i=0;i<len;i++)
            {
                if(s[i]==x[0])
                    s[i]=y[0];
            }
        }

        if(cmd[0]=='D')
        {
            scanf("%s",x);
            int len=strlen(s);
            s[len]=x[0];
//            s[len+1]='\0';
        }

        if(cmd[0]=='U')
        {
            int n;
            scanf("%d",&n);
            int len=strlen(s);
            for(int i=len-1;i>=0 && n>0;i--,n--)
                s[i]='\0';
        }
    }

    printf("%s\n",s);
}
