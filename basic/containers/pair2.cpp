#include<iostream>
#include<utility>
using namespace std;
int main()
{
    pair <int,int> a(1,3);
    pair <int,int> b(4,3);
    cout << (a==b) << "\n";//use brackets
    cout << (a!=b) << "\n";
    cout << (a>=b) << "\n";
    cout << (a<=b) << "\n";
    a.swap(b);//swaps
    a=b;
    cout << a.first << a.second << "\n";
    return 0;
}