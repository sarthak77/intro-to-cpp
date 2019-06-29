#include<bits/stdc++.h>
using namespace std;
vector<long long int>arr;
int main()
{
	long long int a,b,n,temp,i;
	cin >> a >> b;
	n=a+b+1;

	for(i=1;i<=a;i++)
		arr.push_back(i);
    for(i=1;i<=b+1;i++)
    {
        arr.push_back(n);
        n--;
    }

	for(auto it2=arr.begin();it2!=arr.end();it2++)
		cout << *it2 << " ";
	cout << "\n";
	return 0;
}
