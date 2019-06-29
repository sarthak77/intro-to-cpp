#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,t1;
    cin >> n >> m;
    vector<long long int>cities;
    vector<long long int>towers;
    for(long long int i=0;i<n;i++)
    {
        cin >> t1;
        cities.push_back(t1);
    }
    for(long long int i=0;i<m;i++)
    {
        cin >> t1;
        towers.push_back(t1);
    }

    long long int t2,t3,t4,t5;
    long long int r=0;
    for(long long int i=0;i<n;i++)
    {
        t1=lower_bound(towers.begin(),towers.end(),cities[i])-towers.begin();
            
        t2=t1-1;
        t4=abs(cities[i]-towers[t2]);
        if(t1!=m)
        {
            t3=abs(cities[i]-towers[t1]);
            t5=min(t3,t4);
            r=max(r,t5);
        }
        else
        {
            r=max(r,t4);            
        }
        
    }
    cout << r << "\n";
    return 0;
}