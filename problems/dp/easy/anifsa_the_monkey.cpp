#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,a,b;
    cin >> k >> a >> b;
    string s;
    cin >> s;
    
    int len1=s.size()/k;
    int len2=s.size()%k;
    
    if(s.size()>k*b || s.size()<k*a)
        cout << "No solution\n";
    else
    {
        for(int i=0;i<s.size();i++)
        {
            cout << s.substr(i,len1);
            i+=len1-1;
            if(len2>0)
            {
                cout << s[i+1] << "\n";
                len2--;
                i++;
            }
            else
            {
                cout << "\n";
            }
        }
    }
    return 0;
}