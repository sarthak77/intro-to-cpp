#include<bits/stdc++.h>
using namespace std;
void pq(queue<int>q)
{
    while(!q.empty())
    {
        cout << q.front() <<"\n";
        q.pop();
    }
}
int main()
{
    queue<int>q;
    q.push(234);
    q.push(5624);
    q.push(2114);
    pq(q);
    cout << q.back() << "\n";
    return 0;
}