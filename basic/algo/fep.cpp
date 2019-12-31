#include<bits/stdc++.h>
using namespace std;
# define M 1000000007

long long int fep(long long int x,long long int y, long long int m)
{
    //base cases
    if(x==0)
        return 0;
    if(y==0)
        return 1;

    //terminating condition
    if(y==1)
        return (x%m);

    if(y%2)
        return ((fep(x,y-1,m)*fep(x,1,m))%m);
    else
    {
        long long int t=fep(x,y/2,m);
        return (t*t)%m;
    }
}

int main()
{
    long long int x,y,m;
    cin >> x >> y >> m;
    cout << fep(x,y,m) << "\n";
    return 0;
}