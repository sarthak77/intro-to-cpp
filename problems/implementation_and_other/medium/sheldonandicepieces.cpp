#include<bits/stdc++.h>
using namespace std;
int main()
{
    int bucket[10];
    int bucket2[10];
    for(int i=0;i<10;i++)
    {
        bucket[i]=0;
        bucket2[i]=0;
    }
    string t,n;
    cin >> t;
    cin >> n;
    for(auto it=n.begin();it!=n.end();it++)
    {
        if(*it==57)
            *it=54;
        if(*it==53)
            *it=50;
        bucket[*it-48]++;
    }
    int min=1000;
    for(auto it=t.begin();it!=t.end();it++)
    {
        if(*it==57)
            *it=54;
        if(*it==53)
            *it=50;
        bucket2[*it-48]++;

        //cout << min << " " << bucket[*it-48] << " " << bucket2[*it-48] << "\n";
        if((bucket[*it-48]/bucket2[*it-48])<=min)
        {
            min=bucket[*it-48]/bucket2[*it-48];
        }
    }
    cout << min << "\n";
    return 0;
}