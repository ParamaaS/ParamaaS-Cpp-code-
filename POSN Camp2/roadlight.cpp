/*/
- Paramaa Sawanpanyalert -
Lang : c++
/*/
#include <bits/stdc++.h>
using namespace std;
int n,c,c2,a,b,rem,idx,end;
int ar[5005];
priority_queue<pair<int,int> > pq;
main()
{
	//freopen("road.txt","w",stdout);
	scanf("%d",&n);
	for(c=0;c<n;c++)
	{
		scanf("%d%d",&a,&b);
		b++;
		pq.push(make_pair(-a,-b));
	}
	end=-pq.top().second;
	while(!pq.empty())
	{
        a=-pq.top().first;
        b=-pq.top().second;
        pq.pop();
        if(rem==0)
        {
            //idx++;
            rem++;
            //end=b;
            //printf("start ");
            if(pq.size()==0)
            {
            	idx++;
			}
        }
        else if(rem>0)
        {
            if(end>=a)//merge
            {
                end=max(end,b);
    			rem++;
    			//printf("merge ");
            }
            else if(end<a)//new
            {
                rem++;
                idx++;
                end=b;
                //printf("new   ");
            }
        }
		//printf(">%d %d %d %d\n",a,b,end,idx);
    }
    printf("%d",idx+1);
}
/*/
test case
4
-3 -2
-8 -6
-9 -7
9 9
/*/
