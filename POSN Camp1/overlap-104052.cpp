#include<stdio.h>
#include<math.h>
int x1,yy1,r1,x2,y2,r2,d,c,difx,dify,ok,rr;
main()
{
      scanf("%d",&d);
      for(c=0;c<d;c++)
      {
            scanf("%d %d %d %d %d %d",&x1,&yy1,&r1,&x2,&y2,&r2);
            difx=x2-x1;
            dify=y2-yy1;
            ok=dify*dify+difx*difx;
            rr=r1+r2;
            if(rr*rr>=ok)
            {
                printf("TAK");
            }
            else //if(r1+r2<ok)
            {
                printf("NIE");
            }
            dify=0;
            r1=0;
            r2=0;
            rr=0;
            ok=0;
            difx=0;
            printf("\n");
      }
}
