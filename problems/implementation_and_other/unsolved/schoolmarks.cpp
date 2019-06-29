#include<bits/stdc++.h>
using namespace std;
int marks[2000];

int main()
{
    int n,k,p,x,y;
    int i,sum=0;
    cin >> n >> k >> p >> x >> y;
    for(i=0;i<k;i++)
    {
        cin >> marks[i];
        sum+=marks[i];
    }
    if(n-k+sum>x)
    {
        cout << "-1\n";
        return 0;
    }
    
    return 0;
}