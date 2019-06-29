#include<bits/stdc++.h>
using namespace std;
int num[1100];
int power[10];
vector<string>palindrome;
int main()
{
    string n;
    cin >> n;
    int len=n.size();
    int i,j,limit=pow(2,len);
    for(i=0;i<limit;i++)
        num[i]=i;
    for(i=0;i<len;i++)
        power[i]=pow(2,i);
    for(i=0;i<limit;i++)
    {
        for(j=0;j<len;j++)
        {
            if((num[i] & power[j])==power[j])
            {
                palindrome.push_back(n[j].str());
            }
        }
    }
    return 0;
}