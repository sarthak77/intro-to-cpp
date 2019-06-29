#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t1,t2;
    cin >>n;
    vector<pair<long long int,long long int>>num;
    for(long long int i=0;i<n;i++)
    {
        cin >> t1 >> t2;
        num.push_back(make_pair(t1,t2));
    }
    sort(num.begin(),num.end());
    long long int count=0;
    long long int maxend=0;
    for(long long int i=0;i<n;i++)
    {
        if(num[i].second<maxend)
            count++;
        maxend=max(maxend,num[i].second);
    }
    cout << count << "\n";
    return 0;
}