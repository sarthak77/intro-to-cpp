#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t1;
    cin >>n;
    vector<pair<int,int>>task;
    vector<int>rep;
    for(int i=0;i<n;i++)
    {
        cin >>t1;
        task.push_back(make_pair(t1,i+1));
    }
    sort(task.begin(),task.end());

    int count=0;
    for(int i=0;i<n-1;i++)
        if(task[i].first==task[i+1].first)
        {
            count++;
            rep.push_back(i);
        }

    if(count<2)
    {
        cout << "NO\n";
        return 0;
    }
    else
    {   
        int i;
        cout << "YES\n";
        for(i=0;i<n-1;i++)
        {
           cout << task[i].second << " ";
        }
        cout << task[i].second << "\n";


        t1=task[rep[0]].second;
        task[rep[0]].second=task[rep[0]+1].second;
        task[rep[0]+1].second=t1;
        for(i=0;i<n-1;i++)
        {
           cout << task[i].second << " ";
        }
        cout << task[i].second << "\n";

        t1=task[rep[1]].second;
        task[rep[1]].second=task[rep[1]+1].second;
        task[rep[1]+1].second=t1;
        for(i=0;i<n-1;i++)
        {
           cout << task[i].second << " ";
        }
        cout << task[i].second << "\n";
    }
    
    return 0;
}