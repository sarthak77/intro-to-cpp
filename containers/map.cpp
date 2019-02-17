/*
There is one important difference between map::find() and
map::operator []. While map::find() will never change the contents of
map, operator [] will create an element if it does not exist. In some
cases this could be very convenient, but it’s definitly a bad idea to
use operator [] many times in a loop, when you do not want to add new
elements. That’s why operator [] may not be used if map is passed as a
const reference parameter to some function:
*/
#include<bits/stdc++.h>
using namespace std;
void pm(map<string,int>a)
{
    for(map<string,int>::iterator it=a.begin();it!=a.end();it++)
    cout << it->first << " " << it->second << "\n";
}
int main()
{
    map<string,int>m;
    m["a"]=1;
    m["b"]=32;
    m["c"]=4;
    m.insert(pair<string,int>("sds",453));
    pm(m);
    cout << m.count("a") << "\n";//returns 1 if key a present else 0
    m.insert(pair<string,int>("a",432));
    cout << m.count("a") << "\n";
    m.erase("a");
    pm(m);
    auto itr=m.find("b");
    cout << itr->second << "\n";
    m.clear();//clears the map
    pm(m);
    return 0;
}