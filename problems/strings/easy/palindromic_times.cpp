#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    string hour,min;
    hour.push_back(a[0]);
    hour.push_back(a[1]);
    min.push_back(a[3]);
    min.push_back(a[4]);
    int h,m;
    h=stoi(hour);
    m=stoi(min);
    if(h/10==m%10 && h%10==m/10)
        m++;

    while(h/10!=m%10 || h%10!=m/10)
    {
        if(m==59)
        {
            m=0;
            if(h==23)
                h=0;
            else
                h++;
        }
        else
            m++;
    }

    string hh,mm;
    hh=to_string(h);
    mm=to_string(m);
    if(h<10)
        hh='0'+hh;
    if(m<10)
        mm='0'+mm;

    cout << hh << ":" << mm << "\n";


    return 0;
}