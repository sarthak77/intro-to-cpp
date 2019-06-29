#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,t1;
    vector<int>walk;
    vector<int>ans;
    cin >> n >> k;
    for(int i=0;i<n;i++)
    {
        cin >> t1;
        walk.push_back(t1);
    }
    ans.push_back(walk[0]);
    for(int i=1;i<n;i++)
    {
        if(walk[i]+ans[i-1]<k)
            ans.push_back(k-ans[i-1]);
        else
            ans.push_back(walk[i]);
    }

    cout << accumulate(ans.begin(),ans.end(),0)-accumulate(walk.begin(),walk.end(),0) << "\n";
    for(int i=0;i<n-1;i++)
        cout << ans[i] << " ";
    cout << ans[n-1] << "\n";
    return 0;
}