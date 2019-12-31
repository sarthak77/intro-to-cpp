/*
Default is max heap
With greater int it is min heap
*/

#include<bits/stdc++.h>
using namespace std;
// void pp(priority_queue<int>x)
void pp(priority_queue<int,vector<int>,greater<int>>x)
{
    while(!x.empty())
    {
        cout << x.top() << " ";
        x.pop();
    }
    cout << "\n";
}
int main()
{
    // priority_queue<int>a;
    priority_queue<int,vector<int>,greater<int>>a;
    a.push(12);
    a.push(212);
    a.push(3412);
    a.push(8912);
    pp(a);
    cout << a.top() << "\n";
    return 0;
}