#include<bits/stdc++.h>
using namespace std;

int gcd(int x,int y)
{
    if(x<y)
        swap(x,y);
    
    if(y==0)
        return x;
    else
        return gcd(x%y,y);   
}

int main()
{
    int x,y;
    cin >> x >> y;
    cout << gcd(x,y) << "\n";
    return 0;
}