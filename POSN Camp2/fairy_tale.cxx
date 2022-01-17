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
int n,pa,len,c,sm;
string bs,s,as;
char arc[100];
map<int,string> mmp;
main()
{
	//freopen("output1.txt","w",stdout);
	scanf("%d",&n);
	if(n==1)
	{
		scanf("%s",arc);
		printf("four\n");
		return 1-1;
	}
	mmp[0]="";
	mmp[1]="one";
	mmp[2]="two";
	mmp[3]="three";
	mmp[4]="four";
	mmp[5]="five";
	mmp[6]="six";
	mmp[7]="seven";
	mmp[8]="eight";
	mmp[9]="nine";
	mmp[10]="ten";
	mmp[11]="eleven";
	mmp[12]="twelve";
	mmp[13]="thriteen";
	mmp[14]="fourteen";
	mmp[15]="fifteen";
	mmp[16]="sixteen";
	mmp[17]="seventeen";
	mmp[18]="eighteen";
	mmp[19]="nineteen";
	mmp[20]="twenty";
	mmp[21]="twentyone";
	mmp[22]="twentytwo";
	mmp[23]="twentythree";
	mmp[24]="twentyfour";
	mmp[25]="twentyfive";
	mmp[26]="twentysix";
	mmp[27]="twentyseven";
	mmp[28]="twentyeight";
	mmp[29]="twentynine";
	mmp[30]="thirty";
	mmp[31]="thirtyone";
	mmp[32]="thirtytwo";
	mmp[33]="thirtythree";
	mmp[34]="thirtyfour";
	mmp[35]="thirtyfive";
	mmp[36]="thirtysix";
	mmp[37]="thirtyseven";
	mmp[38]="thirtyeight";
	mmp[39]="thirtynine";
	mmp[40]="forty";
	mmp[41]="fortyone";
	mmp[42]="fortytwo";
	mmp[43]="fortythree";
	mmp[44]="fortyfour";
	mmp[45]="fortyfive";
	mmp[46]="fortysix";
	mmp[47]="fortyseven";
	mmp[48]="fortyeight";
	mmp[49]="fortynine";
	mmp[50]="fifty";
	mmp[51]="fiftyone";
	mmp[52]="fiftytwo";
	mmp[53]="fiftythree";
	mmp[54]="fiftyfour";
	mmp[55]="fiftyfive";
	mmp[56]="fiftysix";
	mmp[57]="fiftyseven";
	mmp[58]="fiftyeight";
	mmp[59]="fiftynine";
	mmp[60]="sixty";
	mmp[61]="sixtyone";
	mmp[62]="sixtytwo";
	mmp[63]="sixtythree";
	mmp[64]="sixtyfour";
	mmp[65]="sixtyfive";
	mmp[66]="sixtysix";
	mmp[67]="sixtyseven";
	mmp[68]="sixtyeight";
	mmp[69]="sixtynine";
	mmp[70]="seventy";
	mmp[71]="seventyone";
	mmp[72]="seventytwo";
	mmp[73]="seventythree";
	mmp[74]="seventyfour";
	mmp[75]="seventyfive";
	mmp[76]="seventysix";
	mmp[77]="seventyseven";
	mmp[78]="seventyeight";
	mmp[79]="seventynine";
	mmp[80]="eighty";
	mmp[81]="eightyone";
	mmp[82]="eightytwo";
	mmp[83]="eightythree";
	mmp[84]="eightyfour";
	mmp[85]="eightyfive";
	mmp[86]="eightysix";
	mmp[87]="eightyseven";
	mmp[88]="eightyeight";
	mmp[89]="eightynine";
	mmp[90]="ninety";
	mmp[91]="ninetyone";
	mmp[92]="ninetytwo";
	mmp[93]="ninetythree";
	mmp[94]="ninetyfour";
	mmp[95]="ninetyfive";
	mmp[96]="ninetysix";
	mmp[97]="ninetyseven";
	mmp[98]="ninetyeight";
	mmp[99]="ninetynine";
	mmp[100]="onehundred";
	mmp[200]="twohundred";
	mmp[300]="threehundred";
	mmp[400]="fourhundred";
	mmp[500]="fivehundred";
	mmp[600]="sixhundred";
	mmp[700]="sevenhundred";
	mmp[800]="eighthundred";
	mmp[900]="ninehundred";
	for(c=0;c<n;c++)
	{
		scanf("%s",arc);
		if(!strcmp(arc,"$"))
		{
			pa=1;
			continue;
		}
		if(!pa)
		{
			bs+=arc;
			bs+=" ";
		}
		if(pa&&strcmp(arc,"$"))
		{
			as+=" ";
			as+=arc;
		}
		len+=strlen(arc);
	}
	//printf("%d",len);
	/*/
	for(c=1;c<=999;c++)
	{
		printf("%d %s%s\n",c,mmp[100*(c/100)].c_str(),mmp[c%100].c_str());
	}
	/*/
	for(c=len;c<=999;c++)
	{
		if(c<=100)
		{
			sm=mmp[c].size()+len;
			if(sm==c)
			{
				printf("%s%s%s\n",bs.c_str(),mmp[c].c_str(),as.c_str());
				return 1-1;
			}
		}
		else
		{
			sm=mmp[100*(c/100)].size()+mmp[c%100].size()+len;
			//printf("%d %d\n",c,sm);
			if(sm==c)
			{
				printf("%s%s%s %s\n",bs.c_str(),mmp[100*(c/100)].c_str(),mmp[c%100].c_str(),as.c_str());
				return 1-1;
			}
		}
	}
}
