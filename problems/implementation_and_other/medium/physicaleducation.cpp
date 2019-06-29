#include<bits/stdc++.h>
using namespace std;
int req[1000];
int ini[1000];
vector<pair<int,int>>ans;
int main()
{
    int n,i,j;
    cin >> n;
    for(i=0;i<n;i++)
        cin >> req[i];
    for(i=0;i<n;i++)
        cin >> ini[i];
    int count=0;
    for(i=0;i<n;i++)
    {
        j=i;
        while(ini[j]!=req[i])
            j++;
        count+=j-i;
        ans.push_back(make_pair(i,j));
        while(j>0)
        {
            swap(ini[j],ini[j-1]);
            j--;
        }
    }
    cout << count << "\n";
    for(auto it=ans.begin();it!=ans.end();it++)
    {
        //cout << it->first << " " << it->second << "\n";
        it->first++;
        it->second++;
        //cout << it->first << " " << it->second << "\n";
        while(it->second!=it->first)
        {
            cout << it->second-1 << " " << it->second << "\n";
            it->second--;
        }
    }
    return 0;
}