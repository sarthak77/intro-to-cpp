#include<bits/stdc++.h>
using namespace std;
vector<long long int>a(1000000);
vector<long long int>ans;

void pv(vector<long long int>::iterator it,long long int len)
{
	while(len!=0)
	{
		cout << *it << "\n";
		it++;
		len--;
	}
	return;
}

int main()
{
	long long int n,k,i,t;
	k=1;
	long long int mid;
	long long int move=0;
	cin >> n;
	if(n==1)
		return 0;
	t=log2(n);
	for(i=0;i<n;i++)
		cin >> a[i];
	for(i=0;i<n-1;i++)
	{
		mid=k+pow(2,t);
		while(mid>n)
		{
			t--;
			mid=k+pow(2,t);
		}
		a[mid-1]+=a[i];
		move+=a[i];
		a[i]=0;
		k++;
		ans.push_back(move);
	}
	pv(ans.begin(),n-1);
	return 0;
}
