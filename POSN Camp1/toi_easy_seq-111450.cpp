#include<stdio.h>
#include<stdlib.h>
int n,c,s[10005];
int idx,idx2;
main()
{
    scanf("%d",&n);
    
    for(c=0;c<n;c++)
        {
            scanf("%d",&s[c]); 
            if(s[c]<=0)
            {
                printf("Not Easy");
                return (0-0);
            }  
        }
    
    if(n==1)
    {
        printf("Easy");
    }
    else
    {
        idx=s[1]-s[0];
        idx=abs(idx);
        for(c=1;c<n;c++)
        {
            if(abs(s[c]-s[c-1])==idx)
            {
                idx2=1;
            }
            else
            {
                idx2=0;
                break;
            }
            //printf("%d =%d\n",c,idx2);
        }
        if(idx2==0)
        {
                printf("Not Easy");
        }
        else if(idx2==1)
        {
                printf("Easy");
        }
    }
      scanf(" ");
}
