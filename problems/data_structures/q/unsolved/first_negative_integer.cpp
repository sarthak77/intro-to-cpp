#include<bits/stdc++.h>
using namespace std;
vector<int>ind;
vector<int>inp;
vector<int>ans;
int main()
{
    int t;
    cin >> t;
    while(t!=0)
    {
        ind.clear();
        inp.clear();
        ans.clear();
        int n,k,temp;
        cin >> n;

        for(int i=0;i<n;i++)
        {
            cin >> temp;
            inp.push_back(temp);
            
            if(temp<0)
                ind.push_back(i);
        }
        cin >> k;
        
        for(int i=0;i<=n-k;i++)
            ans.push_back(0);

        int left,right;
        for(int i=0;i<ind.size();i++)
        {
            left=ind[i]-k+1;
            left=max(left,0);
            right=n-k;
            right=min(right,ind[i]);

            for(int j=left;j<=right;j++)
                if(ans[j]==0)
                    ans[j]=inp[ind[i]];
        }

        for(int i=0;i<ans.size()-1;i++)
            cout << ans[i] << " ";
        cout << ans[ans.size()-1] << "\n";

        t--;
    }
    return 0;
}