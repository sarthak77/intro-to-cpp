#include<bits/stdc++.h>
using namespace std;

void ps(set<int>x)
{
    for(set<int>::iterator it=x.begin();it!=x.end();it++)
    cout << *it << " ";
    cout << "\n";
}

int main()
{
    set<int>a;
    // set<int,greater<int>>a; For reverse order
    a.insert(12);
    a.insert(2312);
    a.insert(1232);
    a.insert(1222);
    a.insert(1652);
    ps(a);

    // to clear the set
    // a.erase(a.begin(),a.end());
    // ps(a);

    set<int>b(a.begin(),a.find(1232));//b contains all elements less than 1232
    ps(b);
    cout << *a.lower_bound(1232) << "\n";//element not before 1232 in set
    cout << *a.upper_bound(1232) << "\n";//element after 1232 in set
    return 0;
}