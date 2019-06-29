#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t!=0)
    {
        string s;
        int ans=0;
        stack<int>ms;
        ms.push(-1);
        cin >> s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
                ms.push(i);
            else
            {
                if(ms.empty())
                {
                    ms.push(i);
                }
                else
                {
                    ms.pop();
                    if(!ms.empty())
                        ans=max(ans,i-ms.top());
                    else
                        ms.push(i);
                }
            }
        }
        cout << ans << "\n";

        t--;
    }
    return 0;
}