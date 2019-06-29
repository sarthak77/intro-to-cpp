#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while(t!=0)
    {
        stack<pair<long long int,long long int>>ms;
        stack<pair<long long int,long long int>>tans;
        long long int n,left,right,temp,temp2,winsize;
        cin >> n;
        vector<int>ans;
        for(int i=0;i<n;i++)
            ans.push_back(0);

        for(long long int i=0;i<n;i++)
        {
            cin >> temp;
            if(ms.empty())
                ms.push(make_pair(temp,i));
            else
            {
                while(!ms.empty() && ms.top().first>temp)
                {
                    right=i-1;
                    temp2=ms.top().first;
                    ms.pop();
                    if(!ms.empty())
                        left=ms.top().second+1;
                    else
                        left=0;
                    winsize=right-left+1;
                    tans.push(make_pair(temp2,winsize));
                    // cout << temp2 << " " << left << " " << right << " " << winsize << " \n"; 
                }
                ms.push(make_pair(temp,i));
            }
        }

        while(!ms.empty())
        {
            right=n-1;
            temp2=ms.top().first;
            ms.pop();
            if(!ms.empty())
                left=ms.top().second+1;
            else
                left=0;
            winsize=right-left+1;
            tans.push(make_pair(temp2,winsize));
            // cout << temp2 << " " << left << " " << right << " " << winsize << " \n"; 
        }

        int t1,t2;
        for(int i=0;i<n;i++)
        {
            t1=ans[tans.top().second-1];
            t2=tans.top().first;
            ans[tans.top().second-1]=max(t1,t2);
            tans.pop();
        }
        for(int i=n-1;i>0;i--)
        {
            if(ans[i]>ans[i-1])
                ans[i-1]=ans[i];
        }
        for(int i=0;i<n-1;i++)
            cout << ans[i] << " ";
        cout << ans[n-1] << "\n";
        t--;
    }
    return 0;
}