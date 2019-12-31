#include<bits/stdc++.h>
using namespace std;

long long int ans;
vector<long long int>inp;
vector<long long int>aux;

void merge(long long int l,long long int m,long long int h)
{
    long long int i=l,j=m+1,t=0;
    while(i<=m && j<=h)
    {
        if(inp[i]<=inp[j])
            aux[t++]=inp[i++];
        else
        {
            aux[t++]=inp[j++];
            ans+=m+1-i;
        }
    }
    while(i<=m && j>h)
        aux[t++]=inp[i++];
    while(j<=h && i>m)
        aux[t++]=inp[j++];
    for(i=0;i<t;i++)
        inp[l+i]=aux[i];
}

void ms(long long int l,long long int h)
{
    if(l!=h)
    {
        long long int m=(l+h)/2;
        ms(l,m);
        ms(m+1,h);
        merge(l,m,h);
    }
}

int main()
{
    long long int t,n,t1;
    cin >> t;
    while(t--)
    {
        inp.clear();
        aux.clear();
        
        cin >> n;
        for(long long int i=0;i<n;i++)
        {
            cin >> t1;
            inp.push_back(t1);
            aux.push_back(t1);
        }

        ans=0;
        ms(0,n-1);
        cout << ans << "\n";
    }
	return 0;
}