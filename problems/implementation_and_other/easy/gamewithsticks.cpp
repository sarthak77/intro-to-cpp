#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,points;
    int count=0;
    cin >> n >> m;
    points=n*m;
    while(points>0)
    {
        points-=(n-1)+(m-1)+1;
        n-=1;
        m-=1;
        count++;
    }
    if(count%2)
    cout << "Akshat\n";
    else
    cout << "Malvika\n";
    return 0;
}