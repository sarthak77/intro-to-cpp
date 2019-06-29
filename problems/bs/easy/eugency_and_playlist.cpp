#include<bits/stdc++.h>
using namespace std;

// typedef long long int long long int;

int main()
{
    long long int n,m,t1;
    cin >> n >> m;
    vector<long long int>duration;
    vector<long long int>times;
    vector<long long int>moments;
    vector<long long int>cumsum;
    for (long long int i=0;i<n;i++)
    {
        cin >> t1;
        times.push_back(t1);
        cin >> t1;
        duration.push_back(t1);
    }
    for(long long int i=0;i<m;i++)
    {
        cin >> t1;
        moments.push_back(t1);
    }
    t1=0;
    for(long long int i=0;i<n;i++)
    {
        t1+=duration[i]*times[i];
        cumsum.push_back(t1);
    }
    for(long long int i=0;i<m;i++)
    {
        t1=lower_bound(cumsum.begin(),cumsum.end(),(long long int)moments[i])-cumsum.begin();
        cout << t1+1 << "\n";
    }
    return 0;
}