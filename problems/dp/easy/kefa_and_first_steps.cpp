#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin >> n;
    vector<int>num;
    for(int i=0;i<n;i++)
    {
        cin >> t;
        num.push_back(t);
    }
    int tempans=1;
    int ans=1;
    for(int i=1;i<n;i++)
    {
        if(num[i]>=num[i-1])
            tempans++;
        else
        {
            if(tempans>ans)
                ans=tempans;
            tempans=1;
        }
    }
    if(tempans>ans)
        ans=tempans;
    cout << ans << "\n";
    return 0;
}