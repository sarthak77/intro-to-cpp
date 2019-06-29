#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int min=n/m;
    int remain=n-min*m;
    for(int i=0;i<m-remain;i++)
    {
        cout << min << " ";
    }
    for(int i=0;i<remain;i++)
    {
        cout << min+1 << " ";
    }
    return 0;
}