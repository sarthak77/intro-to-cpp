#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    stack<int>ms;
    while(t!=0)
    {
        string s;
        cin >> s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==43 || s[i]==45 || s[i]==47 || s[i]==42)
            {
                int a=ms.top();
                ms.pop();
                int b=ms.top();
                ms.pop();
                if(s[i]==43)
                    ms.push(b+a);
                else if(s[i]==45)
                    ms.push(b-a);
                else if(s[i]==42)
                    ms.push(b*a);
                else
                    ms.push(b/a);
            }
            else
                ms.push(s[i]-48);
        }
        cout << int(ms.top()) << "\n";
        t--;
    }
    return 0;
}