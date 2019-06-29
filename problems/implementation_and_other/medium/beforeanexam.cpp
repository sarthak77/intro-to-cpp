#include<bits/stdc++.h>
using namespace std;
int main()
{
    int min[50];
    int max[50];
    vector<int>ans;
    int d,sum,i,j;
    cin >> d >> sum;
    for(i=0;i<d;i++)
    {
        cin >> min[i];
        cin >> max[i];
    }
    int low=0;
    int high=0;
    for(i=0;i<d;i++)
    {
        low+=min[i];
        high+=max[i];
    }
    //cout << high << " " << low << "\n";
    if(sum>high || sum<low)
    {
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";
    int tempsum=sum;
    for(i=0;i<d-1;i++)
    {
        for(j=max[i];j>=min[i];j--)
        {
            if(sum-j>=low-min[i])
            {
                //cout << j << "\n";
                ans.push_back(j);
                sum-=j;
                low-=min[i];
                j=min[i]-1;
            }
        }
    }
    int temp=accumulate(ans.begin(),ans.end(),0);
    ans.push_back(tempsum-temp);
    for(auto it=ans.begin();it!=ans.end();it++)
        cout << *it << " ";
    cout << "\n";
    return 0;
}