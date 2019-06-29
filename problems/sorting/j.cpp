#include<bits/stdc++.h>
using namespace std;

vector<pair<long long int,string>>segment;
vector<long long int>leftarr;
vector<long long int>rightarr;
vector<long long int>leftans;
vector<long long int>rightans;

int main()
{
    long long int n,k,t1,t2;
    string str;
    cin >> n >> k;

    for(long long int i=0;i<n;i++)
    {
        cin >> t1 >> t2;
        str="L" + to_string(i+1);
        segment.push_back(make_pair(t1,str));
        str="R" + to_string(i+1);
        segment.push_back(make_pair(t2,str));
    }

    sort(segment.begin(),segment.end());

    long long int left=0;
    for(long long int i=0;i<2*n;i++)
    {
        if(segment[i].second[0]=='L')
            left++;
        else
            left--;            
        leftarr.push_back(left);
    }

    long long int right=0;
    for(long long int i=2*n-1;i>-1;i--)
    {
        if(segment[i].second[0]=='R')
            right++;
        else
            right--;            
        rightarr.push_back(right);
    }
    reverse(rightarr.begin(),rightarr.end());

    // for(long long int i=0;i<2*n;i++)
    // {
    //     cout << leftarr[i] << " ";
    // }
    // cout << "\n";

    // for(long long int i=0;i<2*n;i++)
    // {
    //     cout << rightarr[i] << " ";
    // }
    // cout << "\n";

    long long int flag=0;
    long long int ans=0;
    for(long long int i=0;i<2*n;i++)
    {
        if(flag==0 && leftarr[i]>=k)
        {
            flag=1;
            leftans.push_back(segment[i].first);
        }
        else if(flag==1 && rightarr[i]>=k)
        {
            flag=0;
            ans++;
            rightans.push_back(segment[i].first);
            // i--;
            if(leftarr[i]>=k)
            {
                flag=1;
                leftans.push_back(segment[i].first);
            }
        }
    }


    t1=0;
    for(long long int i=0;i<ans-1;i++)
    {
        if(rightans[i]==leftans[i+1])
        {
            leftans[i+1]=leftans[i];
            leftans[i]=0;
            rightans[i]=0;
            t1++;
        }
    }
    long long int ans2=ans-t1;

    cout << ans2 << "\n";
    for(long long int i=0;i<ans;i++)
        if(leftans[i]!=0 || rightans[i]!=0)
            cout << leftans[i] << " " << rightans[i] << "\n";
    return 0;
}