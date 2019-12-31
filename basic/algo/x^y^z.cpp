// x^(y^z)%m:- x^n%m where n=y^z%(m-1)

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
    long long int x,y,z,m,n;
    cin >> x >> y >> z >> m;
    n=fep(y,z,m-1);
    cout << fep(x,n,m) << "\n";
    return 0;
}