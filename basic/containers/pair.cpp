#include<iostream>
#include<utility>

#define sz(a) (int)a.size()

using namespace std;
int main()
{
    pair <int,int> x;//default value 0
    x.first=100;
    x.second=103;
    cout << x.first << "\n";
    cout << x.second << "\n";
    pair <int,int> y(1,2);
    cout << y.first << "\n";
    cout << y.second << "\n";
    pair <int,int>a(x);//copy of x
    cout << a.first << "\n";
    cout << a.second << "\n";
    pair <int,string> c;
    c=make_pair(0,"eedede");//use double qoutes
    cout << c.first << "\n";
    cout << c.second << "\n";
    return 0;
}