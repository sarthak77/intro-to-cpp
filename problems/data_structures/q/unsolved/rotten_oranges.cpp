#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int r,c;
    int temp=200,tr,tc;
    int onecount,ans;
    int arr[temp][temp];
    cin >> t;
    while(t!=0)
    {
        ans=0;
        onecount=0;
        queue<pair<int,int>>q;
        cin >> r >> c;
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
            {
                cin >> temp;
                arr[i][j]=temp;
                if(temp==2)
                    q.push(make_pair(i,j));
                if(temp==1)
                    onecount++;
            }
        if(q.empty())
            cout << "-1\n";
        else
        {
            q.push(make_pair(200,200));
            
            while(!q.empty())
            {
                // cout << q.front().first << " " << q.front().second << "\n";
                if(q.front().first==200)
                {

                    ans++;
                    q.pop();
                    if(q.empty())
                        ans--;
                    else
                    {
                        q.push(make_pair(200,200));
                    }
                    if(onecount==0)
                        break;
                }
                else
                {
                    tr=q.front().first;
                    tc=q.front().second;
                    
                    if(tr-1>=0 && arr[tr-1][tc]==1)
                    {
                        q.push(make_pair(tr-1,tc));
                        arr[tr-1][tc]=2;
                        onecount--;
                    }
        
                    if(tc-1>=0 && arr[tr][tc-1]==1)
                    {
                        q.push(make_pair(tr,tc-1));
                        arr[tr][tc-1]=2;
                        onecount--;
                    }
                    if(tc+1<c && arr[tr][tc+1]==1)
                    {
                        q.push(make_pair(tr,tc+1));
                        arr[tr][tc+1]=2;
                        onecount--;
                    }
        
                    if(tr+1<r && arr[tr+1][tc]==1)
                    {
                        q.push(make_pair(tr+1,tc));
                        arr[tr+1][tc]=2;
                        onecount--;
                    }

                    q.pop();
                }
            }
            if(onecount!=0)
                cout << "-1\n";
            else
                cout << ans << "\n";        
        }

        t--;
    }
    return 0;
}