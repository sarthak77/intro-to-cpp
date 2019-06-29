#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while(t!=0)
    {
        stack<pair<long long int,long long int>>ms;
        long long int n,left,right,tarea,area,temp,temp2;
        area=0;
        cin >> n;
        for(long long int i=0;i<n;i++)
        {
            cin >> temp;
            if(ms.empty())
                ms.push(make_pair(temp,i));
            else
            {
                while(!ms.empty() && ms.top().first>temp)
                {
                    right=i;
                    temp2=ms.top().first;
                    ms.pop();
                    if(!ms.empty())
                        left=ms.top().second;
                    else
                        left=-1;
                    tarea=temp2*(right-left-1);
                    // cout << temp2 << " " << left << " " << right << " " << tarea << " \n"; 
                    area=max(area,tarea);
                }
                ms.push(make_pair(temp,i));
            }
        }

        while(!ms.empty())
        {
            right=n;
            temp2=ms.top().first;
            ms.pop();
            if(!ms.empty())
                left=ms.top().second;
            else
                left=-1;
            tarea=temp2*(right-left-1);
            // cout << temp2 << " " << left << " " << right << " " << tarea << " \n"; 
            area=max(area,tarea);
        }

        cout << area << "\n";
        t--;
    }
    return 0;
}