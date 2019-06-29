#include<bits/stdc++.h>
using std::cout;
using std::cin;
using std::swap;
long long int icon[1000000];
long long int launch[1000000];
long long int page[1000000];
long long int prev[1000000];
long long int next[1000000];

int main()
{
    long long int n,m,k;
    cin >> n >> m >> k;
    long long int i,gestre;
    for(i=0;i<n;i++)
    {
        cin >> icon[i];
        page[icon[i]]=(i/k)+1;

        if(i==0)
            prev[icon[i]]=1000000;
        else
            prev[icon[i]]=icon[i-1];
    }

    for(i=0;i<n-1;i++)
    {
        next[icon[i]]=icon[i+1];
    }
    next[icon[n-1]]=1000000;

    gestre=0;
    long long int temp;
    for(i=0;i<m;i++)
    {
        //cout << "\n" << i << "\n";
        //for(long long int x=1;x<=n;x++)
        //    cout << page[x] << " ";
        //cout << "\n";
//
        //for(long long int x=1;x<=n;x++)
        //    cout << prev[x] << " ";
        //cout << "\n";
        
        cin >> launch[i];
        
        if(prev[launch[i]]!=1000000)
        {
            //gesture
            gestre+=page[launch[i]];//-1+1
            
            //page
            swap(page[launch[i]],page[prev[launch[i]]]);
            
            //prev
            temp=prev[launch[i]];
            prev[launch[i]]=prev[temp];
            prev[temp]=launch[i];
            prev[next[launch[i]]]=temp;

            //next
            next[temp]=next[launch[i]];
            next[launch[i]]=temp;
            next[prev[launch[i]]]=launch[i];
        }
        else
        gestre++;
    }
    cout << gestre << "\n";
    return 0;
}