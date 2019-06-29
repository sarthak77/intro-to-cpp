#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,count=0;
    cin >> n >> k;
    int time=240-k;
    for(i=1;i<=n;i++)
    {
        if(time-5*i<0)
            break;
        else
        {
            time-=5*i;
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}