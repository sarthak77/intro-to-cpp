#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t1,t2,k;
    cin >> n;
    k=n/2;
    vector<pair<long long int,long long int>>first;
    vector<pair<long long int,long long int>>second;
    for(long long int i=0;i<n;i++)
    {
        cin >> t1 >> t2;
        first.push_back(make_pair(t1,0));
        second.push_back(make_pair(t2,0));
    }
    for(long long int i=0;i<k;i++)
    {
        first[i].second=1;
        second[i].second=1;
    }
    long long int i=0;
    long long int j=0;
    long long int count=0;
    while(count!=n)
    {
        if(first[i]<second[j])
        {
            first[i].second=1;
            i++;
        }
        else
        {
            second[j].second=1;
            j++;
        }
        count++;
        
    }
    for(long long int i=0;i<n;i++)
        cout << first[i].second;
    cout << "\n";
    for(long long int i=0;i<n;i++)
        cout << second[i].second;
    cout << "\n";
    return 0;
}