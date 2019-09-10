#include<bits/stdc++.h>
using namespace std;
void pp(priority_queue<int>x)
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
    priority_queue<int>a;
    a.push(12);
    a.push(212);
    a.push(3412);
    a.push(8912);
    pp(a);
    cout << a.top() << "\n";
    return 0;
}