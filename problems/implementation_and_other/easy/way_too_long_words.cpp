#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,len;
    string temp;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> temp;
        len=temp.size();
        if(len<11)
        {
            cout << temp << "\n";
        }
        else
        {
            cout << *(temp.begin()) << len-2 << *(temp.end()-1) << "\n";
        }
    }
    return 0;
}