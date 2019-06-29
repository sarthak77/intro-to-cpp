#include<bits/stdc++.h>
using namespace std;
vector<long long int>digit;

void dig(long long int n)
{
    while(n!=0)
    {
        digit.push_back(n%10);
        n=n/10;
    }
}
int main()
{
    long long int n,ans,t1;
    cin >> n;
    ans=0;
    while(n!=0)
    {
        dig(n);
        t1=*(max_element(digit.begin(),digit.end()));
        n-=t1;
        ans++;
        digit.clear();
    }
    cout << ans << "\n";
    return 0;
}