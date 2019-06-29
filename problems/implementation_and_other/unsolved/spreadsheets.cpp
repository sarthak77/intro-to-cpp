#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    long long int col;
    long long int count;
    long long int flag;
    long long int t1;
    string r,c;
    string::iterator it;
    cin >> n;
    string temp;

    while(n!=0)
    {
        cin >> temp;
        
        flag=0;
        count=0;
        if(temp[0]==82)
            count++;
        for(it=temp.begin()+1;it!=temp.end();it++)
        {
            if(*it>=48 && *it<=57)
                count++;
            else
            {
                if(*it==67)
                {
                    count++;
                    t1=it-temp.begin();
                }
            }
        }
        if(count==temp.size() && t1>1)
            flag=1;


        if(flag)
        {
            for(it=temp.begin()+1;*it!=67;it++)
                r.push_back(*it);
            it++;
            while(it!=temp.end())
            {
                c.push_back(*it);
                it++;
            }
            col=stoi(c);
            c.clear();
            while(col!=0)
            {
                c.push_back(col%26+64);
                col=col/26;
            }
            reverse(c.begin(),c.end());
            cout << c << r << "\n";
        }
        else
        {
            for(it=temp.end()-1;*it<=57;it--)
                r.push_back(*it);
            reverse(r.begin(),r.end());
            col=0;
            long long int x=1;
            while(it!=temp.begin())
            {
                col+=(*it-64)*x;
                x=x*26;
                it--;
            }
            
            col+=(*it-64)*x;
            x=x*26;
            cout << "R" << r << "C" << col << "\n";
        }

        r.clear();
        c.clear();
        temp.clear();
        n--;
    }

    return 0;
}