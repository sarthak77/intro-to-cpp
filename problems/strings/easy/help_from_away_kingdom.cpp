#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    string a;
    cin >> a;
    string before,after;

    for(i=0;a[i]!='.';i++)
        before.push_back(a[i]);

    i++;
    while(i<a.size())
    {
        after.push_back(a[i]);
        i++;
    }

    if(before[before.size()-1]=='9')
        cout << "GOTO Vasilisa.\n";
    else
    {
        if(after[0]>52)
            before[before.size()-1]++;
        cout << before << "\n";
    }
    return 0;
}