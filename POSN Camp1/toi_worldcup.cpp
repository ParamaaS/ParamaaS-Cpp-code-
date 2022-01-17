#include<stdio.h>
char name[10][25];
int s[10][10],p[10],so[10],rem[10];
int c,c2,g[10],d[10],idx[10],dif[10];
main()
{
	for(c=1;c<=4;c++)
	{
		scanf("%s",name[c]);
	}
	for(c=1;c<=4;c++)
	{
		for(c2=1;c2<=4;c2++)
		{
			scanf("%d",&s[c][c2]);
			 if(c==1) g[1]+=s[1][c2];
		else if(c==2) g[2]+=s[2][c2];
		else if(c==3) g[3]+=s[3][c2];
		else if(c==4) g[4]+=s[4][c2];
		 	 if(c2==1) d[1]+=s[c][1];
		else if(c2==2) d[2]+=s[c][2];
		else if(c2==3) d[3]+=s[c][3];
		else if(c2==4) d[4]+=s[c][4];
		}
	}
	for(c=1;c<=4;c++)
	{
	dif[c]=g[c]-d[c];
	}
	for(c=1;c<=4;c++)
	{
		for(c2=1;c2<=4;c2++)
		{
			if(c==c2)
			{
				continue;
			}
			if(s[c][c2]>s[c2][c])
			{
				idx[c]+=3;
			}
			if(s[c][c2]==s[c2][c])
			{
				idx[c]++;
			}
		}	
	}
	/*/
	for(c=1;c<=4;c++)
	{
		printf("%s %d\n",name[c],idx[c]);
	}
	/*/
	for(c=1;c<=4;c++)
	{
		so[c]=0;
		for(c2=1;c2<=4;c2++)
		{
			if(so[c]<=idx[c2])
			{
				if(so[c]==idx[c2])
				{
					if(idx[rem[c]]==idx[c2]&&idx[c2]!=0)
					{
						if(dif[rem[c]]>dif[c2])
						{
							//rem[c]=rem[c];
							so[c]=idx[rem[c]];
							continue;
						}
						else if(dif[c2]>dif[rem[c]])
						{
							rem[c]=c2;
							so[c]=idx[c2];
							continue;
						}
						else if(dif[c2]==dif[rem[c]])
						{
							if(g[c2]>g[rem[c]])
							{
								rem[c]=c2;
								so[c]=idx[c2];
								continue;
							}
							else 
							{
								rem[c]=rem[c];
								so[c]=idx[rem[c]];
								continue;
							}
						}
					}
					else if(idx[c2]==0&&idx[c2]==idx[rem[c]])
					{
						rem[c]=c2;
						so[c]=idx[c2];
					}
				}
				else
				{
				rem[c]=c2;
				so[c]=idx[c2];
				}
			}	
		}
		idx[rem[c]]=-1;
	}
	/*/
	for(c=1;c<=4;c++)
	{
		printf("%d ",rem[c]);
	}/*/
	for(c=1;c<=4;c++)
	{
		printf("%s %d\n",name[rem[c]],so[c]);
	}

}
