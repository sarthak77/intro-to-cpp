#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int qcount=0;
    vector<int>after;
    vector<int>before;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='Q')
            qcount++;
        if(s[i]=='A')
            after.push_back(qcount);
    }
    qcount=0;
    for(int i=s.size()-1;i>-1;i--)
    {
        if(s[i]=='Q')
            qcount++;
        if(s[i]=='A')
            before.push_back(qcount);
    }
    reverse(before.begin(),before.end());
    int ans=0;
    for(int i=0;i<after.size();i++)
    {
        ans+=after[i]*before[i];
    }
    cout << ans << "\n";
    return 0;
}