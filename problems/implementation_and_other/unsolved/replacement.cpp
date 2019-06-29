#include<bits/stdc++.h>
using namespace std;
vector<pair<int,char>>a;
vector<pair<int,int>>pp;
int main()
{
    int i,n,m;
    string s;
    cin >> n >> m;
    cin >> s;
    int temp1;
    char temp2;

    for(i=0;i<m;i++)
    {
        cin >> temp1 >> temp2;
        a.push_back(make_pair(temp1,temp2));
    }
    
    int start,flag;
    i=0;
    flag=0;
    while(i<s.size())
    {
        //cout << s[i] << "\n";
        if(s[i]=='.' && flag==0)
        {
            start=i;
            flag=1;
        }
        if(s[i]!='.' && flag==1)
        {
            pp.push_back(make_pair(start,i-1));
            flag=0;
        }
        i++;
        if(i==s.size() && s[i-1]=='.')
            pp.push_back(make_pair(start,i-1));
    }

    int max=0;
    for(auto it=pp.begin();it!=pp.end();it++)
    {   
        max+=it->second-it->first;//+1-1
        //cout << it->first << " " << it->second << "\n";
    }
    cout << max << "\n";
    return 0;
}