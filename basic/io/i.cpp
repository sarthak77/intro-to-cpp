#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    int a,b,c;
    string m;
    cin >> a;
    cout << a << "\n\n";
    cin >> b >> c;
    cout << b+c << "\n";

    /*
    However, cin extraction always considers spaces (whitespaces,
    tabs, new-line...) as terminating the value being extracted, and
    thus extracting a string means to always extract a single word,
    not a phrase or an entire sentence.
    */
    cin >> m;
    cout << m <<"\n";

    /*
    To get an entire line from cin, there exists a function, called
    getline, that takes the stream (cin) as first argument, and the
    string variable as second.
    */

    string n;
    cout << "getline function" << "\n";
    cin.ignore();
    getline(cin,n);
    /*
    dont use cin before getline or use cin.ignore()
    that's because you use cin >> somewhere before getline. when you type
    something and hit enter, the characters you typed and a newline
    char are put into a stream. cin >> extracts the letters but leaves
    the newline char. this newline char is then found by getline and
    therefore an empty string is read. a solution would be to add a
    cin.ignore() before getline
    */
    cout << n << "\n"; 
    return 0;
}