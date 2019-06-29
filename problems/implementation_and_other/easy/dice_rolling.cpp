#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int temp;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        cin >> temp;
        if(temp%7==0)
            cout << temp/7 << "\n";
        else
            cout << temp/7 +1 << "\n";
    }
    return 0;
}