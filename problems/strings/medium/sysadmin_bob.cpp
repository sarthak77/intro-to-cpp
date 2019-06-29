#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    
    if(s[0]=='@' || s[s.size()-1]=='@' || s.size()<3)
    {
        cout << "No solution\n";
        return 0;
    }

    //check for two consecutive @
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='@' && s[i+1]=='@') 
        {
            cout << "No solution\n";
            return 0;
        }    
    }

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='@' && i!=s.size()-2 && s[i+2]=='@') 
        {
            cout << "No solution\n";
            return 0;
        }     
    }
    
    int maxs=-1;
    for(int i=s.size()-1;i>-1;i--)
    {
        if(s[i]=='@')
        {
            maxs=i;
            break;
        }
    }
    if(maxs==-1)
    {
        cout << "No solution\n";
        return 0;
    }

    int flag=0;
    for(int i=0;i<s.size();i++)
    {
        if(flag==2)
        {
            cout << ",";
            flag=0;
        }
        if(flag==1)
            flag=2;
        if(s[i]=='@')
        {
            flag=1;
            if(i==maxs)
                flag=3;
        }
        cout << s[i];
    }
    cout << "\n";
    return 0;
}