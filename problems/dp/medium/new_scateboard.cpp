#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    long long int ans=0;

    for(long long int i=0;i<s.size();i++)
        s[i]-=48;
    
    // single char string
    for(long long int i=0;i<s.size();i++)
        if(s[i]%4==0)
            ans++;

    for(long long int i=s.size()-1;i>0;i--)
    {
        if(s[i]==0 || s[i]==4 || s[i]==8)
        {
            if(s[i-1]%2==0)
            {
                ans+=i;
            }
        }
        else if(s[i]==2 || s[i]==6)
        {
            if(s[i-1]%2==1)
            {
                ans+=i;
            }
        }
    }
    cout << ans << "\n";
    return 0;
}