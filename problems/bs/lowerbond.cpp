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
    a.push_back(12);
    a.push_back(42);
    a.push_back(2);
    a.push_back(1);
    a.push_back(23);
    a.push_back(111);
    
    pv(a);
    sort(a.begin(),a.end());
    pv(a);

    auto b =lower_bound(a.begin(),a.end(),1111)-a.begin();
    cout << b << "\n";
    
    b =lower_bound(a.begin(),a.end(),1)-a.begin();
    cout << b << "\n";
    
    b =upper_bound(a.begin(),a.end(),2)-a.begin();
    cout << b << "\n";
    
    b =lower_bound(a.begin(),a.end(),20)-a.begin();
    cout << b << "\n";
    
    return 0;
}