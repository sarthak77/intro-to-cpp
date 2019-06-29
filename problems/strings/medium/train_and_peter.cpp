#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3;
    cin >> s1 >> s2 >> s3;
    
    int forw,back;
    forw=0;
    back=0;

    int i,j,flag;
    j=0;
    flag=0;

    auto found1=s1.find(s2);
    auto found2=s1.find(s3,found1+s2.size());
    if(found1!=string::npos && found2!=string::npos)
        forw=1;
    
    reverse(s1.begin(),s1.end());

    auto found3=s1.find(s2);
    auto found4=s1.find(s3,found3+s2.size());
    if(found3!=string::npos && found4!=string::npos)
        back=1;

    // cout << forw << " " << back << "\n";
    if(!forw && !back)
        cout << "fantasy\n";
    if(forw && !back)
        cout << "forward\n";
    if(back && !forw)
        cout << "backward\n";
    if(back && forw)
    {
        reverse(s1.begin(),s1.end());
        auto found5=s1.find(s3,found1+s2.size());
        reverse(s1.begin(),s1.end());
        auto found6=s1.find(s3,found3+s2.size());
        if(found5==string::npos)
            cout << "backward\n";
        else if(found6==string::npos)
            cout << "forward\n";
        else
            cout << "both\n";
    }
    
    return 0;
}