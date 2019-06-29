#include<bits/stdc++.h>
using namespace std;
vector<long long int>rooms;
vector<long long int>cumsum;
long long int n;

long long int bs(long long int);

int main()
{
    long long int m,i,temp;
    cin >> n >> m;

    for (i=0;i<n;i++)
    {
        cin >> temp;
        rooms.push_back(temp);
    }

    temp=0;
    for (auto it=rooms.begin();it!=rooms.end();it++)
    {
        temp+=*it;
        cumsum.push_back(temp);
    }

    long long int temp2,prev;
    for (i=0;i<m;i++)
    {
        cin >> temp;
        temp2=upper_bound(cumsum.begin(),cumsum.end(),temp)-cumsum.begin();

        if(cumsum[temp2-1]==temp)
            temp2--;
          
        if(temp2==0)
            prev=0;
        else
            prev=cumsum[temp2-1];
        
        cout << temp2+1 << " " << temp-prev << "\n";
    }

    return 0;
}
