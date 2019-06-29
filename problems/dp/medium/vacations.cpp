#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t1;
    cin >> n;
    vector<int>days;
    for(int i=0;i<n;i++)
    {
        cin >> t1;
        days.push_back(t1);
    }
    // prev=0[rest], 1[contest], 2[sport]
    int prev=0;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(days[i]==0)
        {
            ans++;
            prev=0;
        }
        else if(days[i]==1)
        {
            if(prev==1)
            {
                ans++;
                prev=0;
            }
            else
            {
                prev=1;
            }
        }
        else if(days[i]==2)
        {
            if(prev==2)
            {
                ans++;
                prev=0;
            }
            else
            {
                prev=2;
            }
        }
        else
        {
            if(prev==0)
            {
                if(i!=days.size()-1)
                {
                    if(days[i+1]==1)
                    {
                        prev=2;
                    }
                    else if(days[i+1]==2)
                    {
                        prev=1;
                    }
                }
            }   
            else if(prev==1)
            {
                prev=2;
            }
            else
            {
                prev=1;
            }
            
        }
        
    }
    cout << ans << "\n";
    return 0;
}