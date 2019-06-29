#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,t1,t2;
    cin >> n;
    vector<pair<int,int>>a;
    for(i=0;i<n;i++)
    {
        cin >> t1 >> t2;
        a.push_back(make_pair(t1,t2));
    }
    sort(a.begin(),a.end());
    auto it=a.begin();
    int temp=min(it->first,it->second);
    //cout << it->first << " " << it->second << "\n";
    it++;
    for(;it!=a.end();it++)
    {
        //cout << temp << "\n";
        if(it->second<temp)
            temp=it->first;
        else
            temp=it->second;
    }
    cout << temp << "\n";
    return 0;
}