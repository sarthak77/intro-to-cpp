#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t1;
    vector<long long int>a;
    cin >> n;
    for(long long int i=0;i<n;i++)
    {
        cin >> t1;
        a.push_back(t1);
    }
    sort(a.begin(),a.end());
    long long int count=1;
    auto t2=a.begin();
    while(count!=n+1)
    {
        if(binary_search(a.begin(),a.end(),count))
        {
            count++;
        }
        else
        {
            t2=upper_bound(a.begin(),a.end(),count);
            if(t2==a.end())
            {
                cout << count << "\n";
                return 0;
            }

            *t2=count;
            count++;
        }
        
    }
    cout << count << "\n";
    return 0;
}