#include<bits/stdc++.h>
using namespace std;
void ps(stack<int>x)//makes copy
{
    while(!x.empty())
    {
        cout << x.top() << "\n";
        x.pop();
    }
}
int main()
{
    stack<int>s;
    s.push(4);
    s.push(24);
    s.push(4344);
    ps(s);
    return 0;
}