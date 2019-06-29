#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int flag;
    string temp;
    int len;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        flag=1;
        cin >> temp;
        len=temp.size();
        
        auto start=temp.begin();
        auto end=temp.end()-1;
        while(start<=end && flag==1)
        {
            if(*start!=*end)
            {
                cout << temp << "\n";
                flag=0;
            }
            else
            {
                start++;
                end--;
            }
            if(start>end)
            {
                int tl=1;
                for(auto it=temp.begin();it!=temp.end()-1;it++)
                {
                    if(*it==*(it+1))
                    tl++;
                }
                if(tl==len)
                    cout << "-1\n";
                else
                {
                    for(auto it=temp.begin();it!=temp.end()-1;it++)
                    {
                        if(*it!=*(it+1))
                        {
                            iter_swap(it,it+1);
                            cout << temp << "\n";
                            flag=0;
                            break;
                        }
                    }
                }
            }
        }
    }
    return 0;
}