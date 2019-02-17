#include<bits/stdc++.h>
using namespace std;
void pv(vector<int>x)
{
    for(auto it=x.begin();it!=x.end();it++)
    cout << *it << " ";
    cout << "\n";
}
int main()
{
    vector<int>a;
    a.push_back(34);
    a.push_back(31);
    a.push_back(1);
    a.push_back(67);
    a.push_back(13);
    a.push_back(0);
    pv(a);
    sort(a.begin(),a.end());
    pv(a);
    sort(a.begin(),a.end(),greater<int>());//sort in reverse order
    pv(a);
    return 0;
}