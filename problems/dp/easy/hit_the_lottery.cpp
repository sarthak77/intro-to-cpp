#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count;
	count=0;
	cin >> n;
	if(n/100>0)
	{
		count+=n/100;
		n-=(n/100)*100;
	}
	if(n/20>0)
	{
		count+=n/20;
		n-=(n/20)*20;
	}
	if(n/10>0)
	{
		count+=n/10;
		n-=(n/10)*10;
	}
	if(n/5>0)
	{
		count+=n/5;
		n-=(n/5)*5;
	}
	if(n>0)
	{
		count+=n;
		n-=n;
	}
	cout << count << "\n";
	return 0;
}
