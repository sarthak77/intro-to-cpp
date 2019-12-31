// Find prime numbers less than N
// Time complexity O(N*log(log(N))) till N=10^7

#include<bits/stdc++.h>
using namespace std;

vector<bool>num;

void sieve(int n)
{
    num.clear();
    for(int i=0;i<=n;i++)
        num.push_back(true);

    num[0]=false;
    num[1]=false; 

    for(int i=2;i<=n;i++)
    {
        if(num[i])
        {
            for(int j=2*i;j<=n;j+=i)
                num[j]=false;
        }
    }
}

int main()
{
    int n,t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        sieve(n);

        for(int i=0;i<=n;i++)
        {
            if(num[i])
            {
                cout << i << " ";
            }
        }
        cout << "\n";
    }
	return 0;
}