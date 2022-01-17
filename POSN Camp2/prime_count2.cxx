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
int c,d,c2,idx,sq,n,a,b,m;
string s,s2,res;
long long ok;
vector<int> vec,asw,prim;
vector<int>::iterator it,it2;
bitset<55005> bs;
main()
{
	///freopen("prime.txt","w",stdout);
	asw.pb(2);
	asw.pb(3);
	asw.pb(5);
	asw.pb(7);
    for(c=0;c<=20000;c++)
	{
		s="";
		d=c;
		stringstream ss2;
		ss2 << d;
		ss2 >> s;
		res=s;
        reverse(res.begin(),res.end());
		for(c2=0;c2<=9;c2++)
		{
			s2=s;
			s2+=(c2+'0');
            s2+=res;
            if(s2[0]!='0')
			{
                ///printf("%s\n",s2.c_str());
                stringstream ss;
                ss << s2;
                ss >> ok;
                if(ok<=2000000000)
                vec.pb(ok);
			}
		}
		if(s2[0]!='0')
		{
			s2=s;
            s2+=res;
			///printf("%s\n",s2.c_str());
			stringstream ss;
			ss << s2;
			ss >> ok;
			if(ok<=2000000000)
			vec.pb(ok);
		}
		///printf(".%d\n",c);
	}
	sort(vec.begin(),vec.end());
	///printf("%d\n",vec.size());
	//printf("%d\n",vec[vec.size()-1]);
    //*/
    prim.pb(2);
    for(c=3;c<=55000;c+=2)
	{
        if(bs[c])
			continue;
		prim.pb(c);
		for(c2=c+c;c2<=55000;c2+=c)
			bs[c2]=1;
	}//*/
	for(c=0;c<vec.size();c++)
	{
        d=vec[c];
        ///printf(">%d %d\n",c,d);
        idx=1;
        sq=sqrt(d);
        for(c2=0;prim[c2]<=sq;c2++)
		{
            if(d%prim[c2]==0)
			{
                idx=0;
                break;
			}
		}
		if(idx)
			asw.pb(d);
	}
	sort(asw.begin(),asw.end());
	/*/
	for(c=0;c<asw.size();c++)
	{
        printf("%d %d\n",c,asw[c]);
	}//*/
	scanf("%d",&n);
	m=n;
	while(n--)
	{
		scanf("%d%d",&a,&b);
		it=lower_bound(asw.begin(),asw.end(),a);
		it2=lower_bound(asw.begin(),asw.end(),b+1);
		///printf("%d %d %d %d %d %d\n",m-n,*it,it-asw.begin(),*it2,it2-asw.begin(),it2-it);
		printf("%d\n",it2-it);
	}//*/
}
