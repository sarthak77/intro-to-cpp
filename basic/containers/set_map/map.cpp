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

    //insert in map
    m["a"]=1;
    m["b"]=32;
    m["c"]=4;
    m.insert(pair<string,int>("sds",453));
    pm(m);

    //count() function
    cout << m.count("a") << "\n";//returns 1 if key a present else 0
    
    m.insert(pair<string,int>("a",432));
    cout << m.count("a") << "\n";
    pm(m);
    
    //remove from map
    m.erase("a");
    //or m.remove(auto it=m.find("a"))

    pm(m);
    auto itr=m.find("b");
    cout << itr->second << "\n";
    m.clear();//clears the map
    pm(m);
    return 0;
}