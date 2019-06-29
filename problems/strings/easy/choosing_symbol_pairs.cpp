#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<long long int>count(130);
    for(long long int i=0;i<130;i++)
        count[i]=0;

    for(long long int i=0;i<s.size();i++)
        count[s[i]]++;

    long long int ans;
    ans=0;
    for(long long int i=0;i<130;i++)
        ans+=count[i]*count[i];
    cout << ans << "\n";
    return 0;
}