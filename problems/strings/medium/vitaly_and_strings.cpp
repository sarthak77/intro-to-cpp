#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t,ans,ta;
    cin >> s >> t;
    int flag=0;
    for(int i=0;i<s.size();i++)
    {
        if(flag>0)
        {
            if(flag==1)
                ans.push_back(s[i]);
            if(flag==2)
            {
                ta.push_back('z');
                ans.push_back('a');
            }
        }
        else if(t[i]-s[i]>1)
        {
            ans.push_back(s[i]+1);
            flag=1;
        }
        else if(t[i]-s[i]==1)
        {
            if(i!=s.size()-1)
            {
                ta=ans;
                ta.push_back(s[i]);
                ans.push_back(t[i]);
                flag=2;
            }
        }
        else
        {
            ans.push_back(s[i]);
        }
    }
    if(ans==t && ta==t)
    {
        cout << "No such string\n";
        return 0;        
    }
    if(flag>0)
    {
        if(ans!=t && ans!=s)
            cout << ans << "\n";
        else if(ta!=t && ta!=s)
            cout << ta << "\n";
        else
            cout << "No such string\n";
    }
    else
        cout << "No such string\n";
    return 0;
}