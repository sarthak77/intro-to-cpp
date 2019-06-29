#include<bits/stdc++.h>
using namespace std;

struct stuffing
{
    int amount;
    int req;
    int doughreq;
    int cost;
};
vector<stuffing>s;

bool com(stuffing a, stuffing b)
{
    return(float(a.cost)/float(a.doughreq) > float(b.cost)/float(b.doughreq));
}
int main()
{
    int dough,types,c0,d0;
    cin >> dough >> types >> c0 >> d0;
    int t1,t2,t3,t4;
    for(int i=0;i<types;i++)
    {
        cin >> t1 >> t2 >> t3 >> t4;
        s.push_back({t1,t2,t3,t4});
    }
    s.push_back({0,0,c0,d0});
    sort(s.begin(),s.end(),com);

    for(int i=0;i<types+1;i++)
    {
        cout << s[i].amount << " ";
        cout << s[i].req << " ";
        cout << s[i].doughreq << " ";
        cout << s[i].cost << "\n";
    }

    int ans=0;
    for(int i=0;i<types;i++)
    {
        if(s[i].amount>0)
        {
            t1=float(s[i].amount)/float(s[i].req);
            t2=float(dough)/float(s[i].doughreq);
            t3=min(t1,t2);
            if(dough-s[i].doughreq*t3>=0)
            {
                ans+=t3*s[i].cost;
                dough-=s[i].doughreq*t3;
            }
        }
        else
        {
            t3=dough/c0;
            ans+=t3*d0;
            dough-=t3*c0;   
        }
        
    }
    if(dough>0)
        ans+=d0*(dough/c0);

    cout << ans << "\n";
    return 0;
}