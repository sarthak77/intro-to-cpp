#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[6]="hello";
    cout << a << "\n";
    char b[]="ededede";
    cout << b << "\n";

    //now we'll discuss basic operations
    char str1[]="hello";
    char str2[]="world";
    char temp1[10];
    strcpy(temp1,str1);//copies str1 to temp1
    cout << temp1 << "\n";
    strcat(temp1,str2);//temp1 + str2
    cout << temp1 << "\n";
    cout << strlen(temp1) << "\n";//returns length of string
    return 0;
}