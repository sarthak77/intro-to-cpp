#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    // cout << s1 << "\n" << s2;
    for(int i=0;i<s2.size();i++)
    {
        if(s2[i]!=32)
        {
            for(int j=0;j<s1.size();j++)
            {
                // cout << s2[i] << s1[j] << "\n\n\n";
                if(s1[j]==s2[i])
                {
                    s1[j]=32;
                    s2[i]=32;
                    break;
                }
            }
            if(s2[i]!=32)
            {
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout << "YES\n";
    return 0;
}