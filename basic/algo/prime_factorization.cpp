// naive method is to run a for loop with condition N!=1 {O(N)}
// optimised method is O(sqrt(N))

#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>pf;

void primefactor(int n)
{
    int count=0;

    //check for 2
    while(n%2==0)
    {
        n=n/2;
        count++;
    }
    if(count)
        pf.push_back(make_pair(2,count));

    //check for others
    for(int i=3;i<=sqrt(n);i+=2)
    {
        count=0;
        while(n%i==0)
        {
            n=n/i;
            count++;
        }
        if(count)
            pf.push_back(make_pair(i,count));
    }

    //now n is a prime number
    if(n!=1)
        pf.push_back(make_pair(n,1));
    
}

int main()
{
    int n;
    cin >> n;
    primefactor(n);
    for(int i=0;i<pf.size();i++)
        cout << pf[i].first << " " << pf[i].second << "\n";
    return 0;
}