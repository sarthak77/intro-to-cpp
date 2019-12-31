#include<bits/stdc++.h>
using namespace std;

struct person
{
    int age;
    float height;
};

struct customcmp
{
    bool operator()(person const&p1,person const&p2)
    {
        return p1.height<p2.height;
    }
};

int main()
{
    person p1,p2,p3;
    p1.age=4;
    p2.age=3;
    p3.age=5;
    p1.height=54;
    p2.height=32;
    p3.height=12;

    priority_queue<person,vector<person>,customcmp>pq;
    pq.push(p1);
    pq.push(p2);
    pq.push(p3);

    while(!pq.empty())
    {
        cout << pq.top().height << " ";
        pq.pop();
    }
    return 0;
}