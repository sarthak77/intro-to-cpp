#include<bits/stdc++.h>
using namespace std;
long long int lcm(long long int a,long long int b)
{
    long long int prod=a*b;
    while(b!=0)
    {
        if(a>=b)
            a=a%b;
        else
            swap(a,b);
    }
    return prod/a;
}
void pv(vector<long long int>::iterator it,long long int len)
{
	while(len!=0)
	{
		cout << *it << " ";
		it++;
		len--;
	}
    cout << "\n";
	return;
}
long long int logg(long long int base,long long int num)
{
    while(num!=1)
    {
        if(num%base==0)
            num=num/base;
        else
            return 0;
    }
    return 1;
}
int main()
{
    long long int n,temp;
    vector<long long int>a;
    vector<long long int>buffer;
    cin >> n;
    for(long long int i=0;i<n;i++)
    {
        cin >> temp;
        while(temp%2==0 || temp%3==0)
        {
            if(temp%3==0)
                temp=temp/3;
            else
                temp=temp/2;
        }
        a.push_back(temp);
    }
    //pv(a.begin(),a.size());
    temp=*a.begin();
    for(auto it=a.begin()+1;it!=a.end();it++)
    {
        temp=lcm(temp,*it);
    }
    //cout << "temp::" << temp << "\n";
    //pv(a.begin(),a.size());
    for(auto it=a.begin();it!=a.end();it++)
    {
        buffer.push_back(temp/(*it));
    }
    //pv(buffer.begin(),a.size());

    long long int count=0;
    for(auto it=buffer.begin();it!=buffer.end();it++)
    {
        if(logg(2,*it) || logg(3,*it))
            count++;        
    }
    if(count==n)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}