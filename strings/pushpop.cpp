#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    cin >> a;
    cout << a << "\n";
    a.push_back('d');//push a character(use single qoutes)
    cout << a << "\n";
    a.pop_back();//pop last character
    cout << a << "\n";
    return 0;
}