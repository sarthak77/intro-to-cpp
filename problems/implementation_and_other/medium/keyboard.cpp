#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[100][100];
    int bucket[26];
    int n,m,x,len;
    cin >> n >> m >> x;
    int i,j;
    int shift=0;
    for(i=0;i<26;i++)
        bucket[i]=0;

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin >> arr[i][j];
            if(arr[i][j]=='S')
                shift=1;
            else
                bucket[arr[i][j]-97]=1;
        }
    }

    int temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr[i][j]=='S')
            {
                //cout << i << " " << j << "\n";
               for(int k=0;k<n;k++)
               {
                   for(int l=0;l<m;l++)
                   {
                       temp=(k-i)*(k-i)+(l-j)*(l-j);
                       //cout << "temp::" << temp << "\n";
                       if(temp<=x*x)
                        bucket[arr[k][l]-97]=2;
                   }
               }
            }
        }
    }
    //cout << shift << "\n";
    //for(i=0;i<26;i++)
    //    cout << bucket[i] << " ";
    //cout << "\n";
    cin >> len;
    string text;
    cin >> text;
    int count=0;
    for(auto it=text.begin();it!=text.end();it++)
    {
        if(*it>=65 && *it<=90 && (shift==0 || bucket[*it-65]==0))
        {
            cout << "-1\n";
            return 0;
        }
        else if(bucket[*it-97]==0 && *it>=97 && *it<=122)
        {
            cout << "-1\n";
            return 0;
        }
        else
        {
            if(*it>=65 && *it<=90)
            {
                if(bucket[*it-65]==1)
                {
                    //cout << *it << "\n";
                    count++;
                }
            }
        }
    }
    cout << count << "\n";
    return 0;
}