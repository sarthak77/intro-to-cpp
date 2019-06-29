#include<iostream>
using namespace std;

int main()
{
    int a=1;
    char b[4]="abc";
    cout << b;
    cout << "\n";
    cout << "bwwdwdwdere";
    cout << "\n";
    cout << 343434;
    cout << "\n";

    cout << "wwwrwr" << "\n";
    //for combining variables and strings use chained insertion
    cout << "hello " << a << "\n";

    cout << "hello " << a << endl;//slow because flushes the stream
    //cin and cout flush automatically so no need to flush using endl
    return 0;
}