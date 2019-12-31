// Find permutations and print in lexicographic sorted order
#include<bits/stdc++.h>
using namespace std;
vector<string>inp;

void perm(string s,int l,int r)
{
    if(l==r)
        inp.push_back(s);
    else
    {
        string ts=s;
        for(int i=l;i<=r;i++)
        {
            ts=s;
            swap(ts[l],ts[i]);
            perm(ts,l+1,r);
        }   
    }
}

int main()
{
    int t;
    string s;
    cin >> t;
    while(t--)
    {
        inp.clear();
        cin >> s;
        perm(s,0,s.size()-1);
        sort(inp.begin(),inp.end());
        for(int i=0;i<inp.size();i++)
            cout << inp[i] << " ";
        cout << "\n";
    }

	return 0;
}