#include<bits/stdc++.h>
using namespace std;

bool com(string s1, string s2) 
{
    return (s1.size() < s2.size()); 
}
int main()
{
    int n;
    string t1;
    cin >> n;
    vector<string>s;
    for(int i=0;i<2*n-2;i++)
    {
        cin >> t1;
        s.push_back(t1);
    }
    sort(s.begin(),s.end(),com);

    for(int i=0;i<2*n-2;i++)
        cout << s[i] << "\n";

    return 0;
}