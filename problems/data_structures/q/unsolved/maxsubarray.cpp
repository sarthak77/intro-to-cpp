#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<int>inp;
    deque<int>ans;
    while(t!=0)
    {
        ans.clear();
        inp.clear();
        int n,k;
        int t1;
        cin >> n >> k;

        for(int i=0;i<n;i++)
        {
            cin >> t1;
            inp.push_back(t1);
        }
        
        for(int i=0;i<k;i++)
        {
            while(!ans.empty() && inp[i]>=inp[ans.back()])
                ans.pop_back();
                
            ans.push_back(i);
        }

        for(int i=k;i<n;i++)
        {
            cout << inp[ans.front()] << " ";
            while(!ans.empty() && inp[i]>=inp[ans.back()])
                ans.pop_back();
            
            while(!ans.empty() && ans.front()<=i-k)
                ans.pop_front();
            
            ans.push_back(i);
        }

        cout << inp[ans.front()] << "\n";

        t--;
    }
    return 0;
}