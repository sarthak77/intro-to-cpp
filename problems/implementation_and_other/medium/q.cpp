#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp;
    cin >> n;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        cin >> temp;
        a.push_back(temp);
    }
    sort(a.begin(),a.end());
    int sum=0;
    int ans=0;
    for(auto it=a.begin();it!=a.end();it++)
    {
        if(*it>=sum)
        {
            sum+=*it;
            ans++;
            //cout << *it << "\n";
        }
    }
    cout << ans << "\n";
    return 0;
}