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
    cout << binary_search(a.begin(),a.end(),3) << "\n";//0 if not found
    cout << binary_search(a.begin(),a.end(),111) << "\n";//1 if found
    return 0;
}