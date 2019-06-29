#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,t1,t2;
    cin >> n >> m;
    vector<long long int>init;
    vector<long long int>compression;
    vector<long long int>diff;
    for(long long int i=0;i<n;i++)
    {
        cin >> t1 >> t2;
        init.push_back(t1);
        compression.push_back(t2);
        diff.push_back(t1-t2);
    }
    sort(diff.begin(),diff.end());
    long long int sum=accumulate(init.begin(),init.end(),(long long int)0);
    long long int count=0;
    while(count<=n)
    {
        if(sum<=m)
        {
            cout << count << "\n";
            return 0;            
        }
        else
        {
            if(count==n)
            {
                cout << -1 << "\n";
                return 0;
            }
            sum-=diff[n-1-count];
            count++;
        }
    }
    cout << -1 << "\n";
    return 0;
}