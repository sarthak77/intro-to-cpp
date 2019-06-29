#include<bits/stdc++.h>
using namespace std;
int books[1000000];
int cum[1000000];
int ansarr[1000000];

int main()
{
    int n,m;
    int i;
    cin >> n >> m;
    for(i=0;i<n;i++)
        cin >> books[i];
    int count=0;
    for(i=0;i<n;i++)
    {
        count+=books[i];
        cum[i]=count;
    }
    
    //for(i=0;i<n;i++)
    //    cout << cum[i] << " ";
    //cout << "\n";
    
    int ans;
    int temp;
    int low,mid,high;
    for(i=0;i<n;i++)
    {
        ans=0;
        low=i;
        high=n-1;
        while(low<=high)
        {
            mid=(low+high)/2;
            temp=cum[mid]-cum[i]+books[i];
            //cout << i << " " << temp << "\n";
            if(temp>m)
            {
                high=mid-1;
            }
            else
            {
                if(mid-i+1>ans)
                    ans=mid-i+1;
                low=mid+1;
            }
            //cout << "ans::" << ans << "\n";
        }
        ansarr[i]=ans;
    }

    //for(i=0;i<n;i++)
    //    cout << ansarr[i] << " ";
    //cout << "\n";
    int j=ansarr[0];
    for(i=0;i<n;i++)
    {
        if(ansarr[i]>j)
        j=ansarr[i];
    }
    cout << j << "\n";
    return 0;
}