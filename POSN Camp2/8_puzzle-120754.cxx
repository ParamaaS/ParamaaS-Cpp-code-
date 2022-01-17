/*/
- Paramaa Sawanpanyalert -
Lang : c++
/*/
#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
#define mp make_pair
#define pb push_back
int c,c2,d,x,y,nx,ny,cc;
string s,stem,ss;
int ar[9][9];
char ch,arc[9][9],temp;
int tidx[]={0,0,-1,1},tidy[]={1,-1,0,0};
queue<string> q;
map<string,string> mmp;
main()
{
	//freopen("output1.txt","w",stdout);
	for(c=0;c<3;c++)
	{
		for(c2=0;c2<3;c2++)
		{
			scanf("%d",&d);
			ar[c][c2]=d;
			ch=d+'0';
			ss+=ch;
		}
	}
	q.push("123456780");
	mmp["123456780"]="";
	while(!q.empty())
	{
		stem=q.front();
		q.pop();
		//printf(">>%s\n",stem.c_str());
		for(c=0;c<9;c++)
		{
			if(stem[c]=='0')
				break;
		}
		cc=c-3;
		if(cc>=0)///^
		{
			s=stem;
			swap(s[cc],s[c]);
			if(mmp.find(s)==mmp.end())
			{
				mmp[s]=mmp[stem]+'D';
				q.push(s);
			}
		}
		cc=c+3;
		if(cc<9)///v
		{
			s=stem;
			swap(s[cc],s[c]);
			if(mmp.find(s)==mmp.end())
			{
				mmp[s]=mmp[stem]+'U';
				q.push(s);
			}
		}
		cc=c+1;///->
		if((c+1)%3!=0)
		{
			s=stem;
			swap(s[cc],s[c]);
			if(mmp.find(s)==mmp.end())
			{
				mmp[s]=mmp[stem]+'L';
				q.push(s);
			}
		}
		cc=c-1;///<-
		if(c%3!=0)
		{
			s=stem;
			swap(s[cc],s[c]);
			if(mmp.find(s)==mmp.end())
			{
				mmp[s]=mmp[stem]+'R';
				q.push(s);
			}
		}
	}
	//printf(">>%s",ss.c_str());
	s=mmp[ss];
	reverse(s.begin(),s.end());
	printf("%s\n",s.c_str());

}
