/*/
- Paramaa Sawanpanyalert -
Lang : c++
/*/
#include<bits/stdc++.h>
using namespace std;
queue<int> q;
int n,k,c;
int p[1300000];
stack<string> stk;
main()
{
	scanf("%d",&n);
	q.push(1);
	p[1]=-1;
	while(!q.empty())
	{
		k=q.front();
		q.pop();
		if(k*3<=1234567&& !p[k*3])
		{
			q.push(k*3);
			p[k*3]=k;
		}
		if(!p[k/2])
		{
			q.push(k/2);
			p[k/2]=k;
		}				
	}
	while(n!=1)
	{
		if(n<p[n])
		{
			stk.push("/2");
		}
		else
		{
			stk.push("*3");
		}
		n=p[n];
	}
	printf("1");
	while(!stk.empty())
	{
		printf("%s",stk.top().c_str());
		stk.pop();
	}
}

