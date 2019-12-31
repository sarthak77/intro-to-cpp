/*
NOTES:
Set is a red black tree which is a bst of logn height(self balancing bst)
Set can add, remove and check the presence of particular element in O(log N), where N is the count of objects in the set.
While adding elements to set, the duples [duplicates?] are discarded.
A count of the elements in the set,N, is returned in O(1).

The push_back() member may not be used with set. It make sense: since the order of elements in set does matter, push_back() is not applicable here.
Since set is not a linear container, it’s impossible to take the element in set by index. Therefore, the only way to traverse the elements of set is to use iterators.
*/

#include<bits/stdc++.h>
using namespace std;

void ps(set<int>x)
{
    for(auto it=x.begin();it!=x.end();it++)
    cout << *it << " ";
    cout << "\n";
}

int main()
{
    set<int>s;
    for(int i=0;i<100;i++)
    s.insert(i);
    ps(s);
    s.insert(34);//does nothing as 34 already in the set
    for(int i=2;i<100;i+=2)
    s.erase(i);
    ps(s);
    cout << s.size() << "\n";

    //find returns iterator to the element 33 if present 
    //if not present then it returns iterator to the end
    //find works in O(logN)
    if(s.find(33)!=s.end())
        cout << "33 is present\n";
    if(s.count(33)!=0)
    cout << "33 is present\n";

    s.insert(33);//multiple values discarded
    cout << s.count(33) << "\n";

    int data[5]={1,2,3,4,5};
    set<int>a(data,data+4);//create set of first four elements of data array
    ps(a);

    return 0;
}