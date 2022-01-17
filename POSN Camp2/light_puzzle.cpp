/*/
- Paramaa Sawanpanyalert -
Lang : c++
/*/
#include <bits/stdc++.h>
using namespace std;
#define A  11
#define B  12
#define C  13
#define D  14
#define E  21
#define F  22
#define G  23
#define H  24
#define I  31
#define J  32
#define K  33
#define L  34
#define M  41
#define N  42
#define O  43
#define P  44
int x,c,c2,d,cx,cy,xx;
int ar[10][10],st[10][10],arr[10][10];
int ad[35];
int che[]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768};
char s[10][10];
bool chk=false;
string str;
queue<int> q;
map<int,string> mmp;
main()
{
	for(c=1;c<=4;c++)
	{
		scanf("%s",s[c]);
	}
	///bit-->int
	for(c=1;c<=4;c++)
	{
		for(c2=0;c2<=3;c2++)
		{
			st[c][c2]=s[c][c2]-'0';
			d=st[c][c2];
			xx+=d*che[((c-1)*4)+c2];
		}
	}
	printf("\n>%d\n",xx);
	///int->bit
	for(c=1;c<=4;c++)
	{
		for(c2=0;c2<=3;c2++)
		{
			ar[c][c2]=(xx/che[((c-1)*4)+c2])%2;
			printf("%d",ar[c][c2]);
		}
		printf("\n");
	}
	q.push(xx);
	while(!q.empty())
	{
		x=q.front();
		q.pop();
		if(mmp.find(x)!=mmp.end())
			continue;
		for(c=1;c<=4;c++)
		{
			for(c2=0;c2<=3;c2++)
			{
				ar[c][c2]=(x/che[((c-1)*4)+c2])%2;
				arr[c][c2]=ar[c][c2];
			}
		}
		for(c=1;c<=4;c++)/// 1 1
		{

		}
	}
}
