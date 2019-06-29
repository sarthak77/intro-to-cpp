#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t,t1,t2;
    cin >> n;
    vector<pair<long long int,long long int>>fig;
    vector<long long int>change;

    for(long long int i=0;i<n;i++)
    {
        cin >> t1 >> t2;
        fig.push_back(make_pair(t2,t1));
    }

    cin >>t;
    t2=0;
    for(long long int i=0;i<t;i++)
    {
        cin >>t1;
        change.push_back(t1-t2);
        t2=t1;
    }
    change.push_back(1000000000000000);

    sort(fig.begin(),fig.end());

    long long int factor=1;
    long long int j=0;
    long long int ans=0;
    for(long long int i=0;i<n;i++)
    {
        // cout << fig[i].second << " " << change[j] << "\n";
        if(fig[i].second==change[j])
        {
            ans+=fig[i].first*fig[i].second*factor;
            factor++;
            j++;
        }
        else if(fig[i].second>change[j])
        {
            ans+=fig[i].first*change[j]*factor;
            fig[i].second-=change[j];
            factor++;
            j++;
            i--;
        }
        else
        {
            ans+=fig[i].first*fig[i].second*factor;
            change[j]-=fig[i].second;
        }
        
    }
    cout << ans << "\n";
    return 0;
}