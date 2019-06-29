#include<bits/stdc++.h>
using namespace std;
void pdq(deque<int>d)
{
    for(auto it=d.begin();it!=d.end();it++)
    cout << *it << " ";
    cout << "\n";
}
int main()
{
    deque<int>a;
    a.push_back(12);
    a.push_back(4512);
    a.push_front(44);
    pdq(a);
    a.pop_front();
    a.pop_back();
    pdq(a);
    cout << a.at(0) << "\n";//find element at 0 index
    return 0;
}