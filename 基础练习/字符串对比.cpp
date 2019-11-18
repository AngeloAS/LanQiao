#include <iostream>
#include <sstream> 
using namespace std;
int judgekind(string a,string b)
{
	if(a.size()!=b.size())
	{
		return 1;
	}
	else
	{
		int i;
		for(i=0;i<a.size();i++)
		{
			if(a[i]!=b[i])break;
		}
		if(i==a.size())
		{
			return 2;
		}
		else
		{
			for(i=0;i<a.size();i++)
			{
				if((a[i]!=b[i])&&(a[i]!=b[i]+'A'-'a')&&(a[i]!=b[i]-'A'+'a'))break;
			}
			if(i==a.size())return 3;
			else return 4;
		}
	}
	
}
 
int main()
{
	string a,b;
	cin>>a>>b;
	int r = judgekind(a,b);
	cout<<r;
	return 0;
}
