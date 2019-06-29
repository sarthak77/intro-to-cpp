#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string>names;
    vector<int>taxi;
    vector<int>pizza;
    vector<int>girl;

    int nos,t,p,g;
    string t1,t2;
    for(int i=0;i<n;i++)
    {
        cin >>nos;
        cin >>t1;
        names.push_back(t1);
        t=0;
        p=0;
        g=0;
        for(int j=0;j<nos;j++)
        {
            cin >> t2;
            if(t2[0]==t2[1] && t2[1]==t2[3] && t2[3]==t2[4] && t2[4]==t2[6] && t2[6]==t2[7])
                t++;
            else if(t2[0]>t2[1] && t2[1]>t2[3] && t2[3]>t2[4] && t2[4]>t2[6] && t2[6]>t2[7])
                p++;
            else
                g++;

        }
        taxi.push_back(t);
        pizza.push_back(p);
        girl.push_back(g);
    }

    auto maxp=max_element(pizza.begin(),pizza.end());
    auto maxt=max_element(taxi.begin(),taxi.end());
    auto maxg=max_element(girl.begin(),girl.end());

    vector<string>ansp;
    vector<string>anst;
    vector<string>ansg;
    for(int i=0;i<n;i++)
    {
        if(pizza[i]==*maxp)
            ansp.push_back(names[i]);
        if(girl[i]==*maxg)
            ansg.push_back(names[i]);
        if(taxi[i]==*maxt)
            anst.push_back(names[i]);
    }

    cout << "If you want to call a taxi, you should call:";
    for(int i=0;i<anst.size();i++)
    {
        if(i!=0)
            cout << ",";
        cout << " ";
        cout << anst[i];
    }
    cout << ".\n";

    cout << "If you want to order a pizza, you should call:";
    for(int i=0;i<ansp.size();i++)
    {
        if(i!=0)
            cout << ",";
        cout << " ";
        cout << ansp[i];
    }
    cout << ".\n";

    cout << "If you want to go to a cafe with a wonderful girl, you should call:";
    for(int i=0;i<ansg.size();i++)
    {
        if(i!=0)
            cout << ",";
        cout << " ";
        cout << ansg[i];
    }
    cout << ".\n";
    return 0;
}