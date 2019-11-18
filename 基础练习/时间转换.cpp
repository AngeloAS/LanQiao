#include <iostream>
#include <sstream> 
using namespace std;
string timetransfer(int num)
{
	int h = 0;
	int m = 0;
	int s = 0;
	h = num/3600;
	num=num%3600;
	m = num/60;
	num = num%60;
	s =num;
	string strnum;
	stringstream ss;
	ss<<h<<":"<<m<<":"<<s;
	ss>>strnum;
	return strnum;
}
 
int main()
{
	int num;
	cin>>num;
	string strnum;
	strnum = timetransfer(num);
	cout<<strnum;
	return 0;
}
