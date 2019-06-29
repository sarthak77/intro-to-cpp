#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char>ms;
    int t;
    cin >> t;
    while(t!=0)
    {
        string s;
        cin >> s;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
                ms.push(s[i]);
            else if(s[i]==')')
            {
                while(ms.top()!='(')
                {
                    cout << ms.top();
                    ms.pop();
                }
                ms.pop();
            }
            else if(s[i]!='+' && s[i]!='-' && s[i]!='*' && s[i]!='/' && s[i]!='^')
                cout << s[i];
            else
            {
                if(s[i]=='^')
                {
                    while(!ms.empty() && ms.top()!='(' && ms.top()=='^')
                    {
                        cout << ms.top();
                        ms.pop();
                    }
                    ms.push(s[i]);
                }
                else if(s[i]=='*' || s[i]=='/')
                {
                    while(!ms.empty() && ms.top()!='(' && (ms.top()=='^' || ms.top()=='/' || ms.top()=='*'))
                    {
                        cout << ms.top();
                        ms.pop();
                    }
                    ms.push(s[i]);
                }
                else
                {
                    while(!ms.empty() && ms.top()!='(' && (ms.top()=='^' || ms.top()=='/' || ms.top()=='*' || ms.top()=='+' || ms.top()=='-'))
                    {
                        cout << ms.top();
                        ms.pop();
                    }
                    ms.push(s[i]);
                }
            }
        }

        while(!ms.empty())
        {
            if(ms.top()!='(')
                cout << ms.top();
            ms.pop();
        }

        cout << "\n";

        t--;
    }
    return 0;
}