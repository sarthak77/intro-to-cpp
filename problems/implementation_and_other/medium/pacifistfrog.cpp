#include<bits/stdc++.h>
using namespace std;
vector<int>frog;
vector<int>mos;
vector<int>smash;
vector<pair<int,int>>ans;
vector<int>final;

int main()
{
    int n,m,k;
    int temp;
    cin >>n >> m>> k;
    int i;
    for(i=0;i<m;i++)
    {
        cin >> temp;
        frog.push_back(temp);   
    }
    for(i=0;i<k;i++)
    {
        cin >> temp;
        mos.push_back(temp);   
    }

    for(auto it=frog.begin();it!=frog.end();it++)
    {
        temp=0;
        for(auto it2=mos.begin();it2!=mos.end();it2++)
        {
            if((*it2)%(*it)==0)
            temp++;
        }
        smash.push_back(temp);
    }
    for(i=1;i<=m;i++)
    {
        ans.push_back(make_pair(smash[i-1],i));
    }
    
    sort(ans.begin(),ans.end());

    int temp2=ans.begin()->first;
    for(auto i=ans.begin();i!=ans.end();i++)
    {
        //cout << i->first << " " << i->second << " ";
        if(i->first==temp2)
        final.push_back(i->second);
    }
    cout << final.size() << "\n";
    for(auto x=final.begin();x!=final.end();x++)
    {
        cout << *x << " ";
    }
    cout << "\n";
    return 0;
}