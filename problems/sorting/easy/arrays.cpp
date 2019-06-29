#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int na,nb,k,m,t1;
    cin >> na >> nb;
    cin >> k >> m;
    vector<long long int>arraya;
    vector<long long int>arrayb;
    for(long long int i=0;i<na;i++)
    {
        cin >> t1;
        arraya.push_back(t1);
    }
    for(long long int i=0;i<nb;i++)
    {
        cin >> t1;
        arrayb.push_back(t1);
    }
    if(arraya[k-1]<arrayb[nb-m])
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}