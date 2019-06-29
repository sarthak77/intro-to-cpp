#include<bits/stdc++.h>
using namespace std;
int main()
{
    int f11,f12,f13,f21,f22,f23;
    cin >> f11 >> f12 >> f13 >> f21 >> f22 >> f23;
    if((f11-f21)!=0 && (f12-f22)!=0 && (f13-f23)!=0)
    cout << "NO\n";
    else
    cout << "YES\n";
    return 0;
}