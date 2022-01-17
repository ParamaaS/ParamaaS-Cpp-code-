#include<bits/stdc++.h>
using namespace std;
int n,m,c,mn=1000005,c2,si,sm,idx;
int f,k;
vector<int> vec;
int chk[100005];
queue<int> q;
main()
{
	scanf("%d%d",&n,&m);
	for(c=2;c<=100000;c++)
	{
		if(chk[c])
		{
			continue;
		}
		vec.push_back(c);
		for(c2=c+c;c2<=100000;c2+=c)
		{
			chk[c2]=1;
		}
	}
	idx=1;
	memset(chk,-1,sizeof chk);
	q.push(n);
	chk[n]=0;
	while(!q.empty())
	{
		f=q.front();
		q.pop();
		k=f;
		//printf(">%d ",k);
		for(c=0;k>1&&vec[c]<f;c++)
		{
			if(k%vec[c]==0)
			{
				while(k%vec[c]==0)
				{
					k/=vec[c];
				}
				if(vec[c]+f<=m&&chk[f+vec[c]]==-1)
				{
				//printf("%d ",vec[c]);
					chk[f+vec[c]]=chk[f]+1;
					q.push(f+vec[c]);
				}
			}
		}//printf("\n");
	}
	printf("%d",chk[m]);

}

