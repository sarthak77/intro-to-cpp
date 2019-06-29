#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr[16];
    cin >> n;
    int i;
    for(i=0;i<n*n;i++)
        cin >> arr[i];
    if(n==1)
    {
        cout << arr[0] << "\n";
        cout << arr[0] << "\n";
        return 0;
    }   
    if(n==2)
    {
        cout << 2*arr[0] << "\n";
        cout << arr[0] << " " << arr[0] << "\n";
        cout << arr[0] << " " << arr[0] << "\n";
        return 0;
    }
    else
    {
        int s=0;
        for(i=0;i<n*n;i++)
            s+=arr[i];
        s=s/n;
        cout << s << "\n";
        if(n==3)
        {

        }
        if(n==4)
        {
            
        }
        return 0;
    }
}