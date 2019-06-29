#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,i,ans;
    cin >> a >> b >> c;

    long long int maxdata,remdata; 
    maxdata=a*c;

    for(i=1;i<=maxdata;i++)
    {
        remdata=maxdata-i*b;
        if(b*c>=remdata)
        {
            ans=i;
            break;            
        }
    }
    cout << i << "\n";
    return 0;
}