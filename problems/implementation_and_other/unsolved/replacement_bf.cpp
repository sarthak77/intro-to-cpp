#include<bits/stdc++.h>
using namespace std;
vector<pair<int,char>>a;
int main()
{
    int i,n,m;
    string s,temp;
    cin >> n >> m;
    cin >> s;
    int temp1;
    char temp2;

    for(i=0;i<m;i++)
    {
        cin >> temp1 >> temp2;
        a.push_back(make_pair(temp1,temp2));
    }
    
    int count;
    for(auto it=a.begin();it!=a.end();it++)
    {
        count=0;
        temp=s;
        temp[it->first-1]=it->second;
        s=temp;
        //cout << temp << "\n";
        for(auto it2=temp.begin();it2!=(temp.end()-1);it2++)
        {
            if(*it2=='.' && *(it2+1)=='.')
            {
                count++;
                temp.erase(std::find(it2, it2+1, '.'));
                //cout << temp << count << "\n";
                it2--;
            }
        }
        cout << count << "\n";
    }

    return 0;
}