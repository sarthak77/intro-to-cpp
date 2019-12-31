#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1 = "Hello";
	string str2 = "World";
	string str3;
	int len ;

	// copy str1 into str3
	str3 = str1;
	cout << "str3 : " << str3 << endl;

	// concatenates str1 and str2
	str3 = str1 + str2;
	cout << "str1 + str2 : " << str3 << endl;

	// total length of str3 after concatenation
	len = str3.size();
	cout << "str3.size() :  " << len << endl;

	char arr[100];
	str1.copy(arr,5,0);
	cout << arr << "\n";
	/*
	This function copies the substring in target character array
	mentioned in its arguments. It takes 3 arguments, target char array,
	length to be copied and starting position in string to start copying
	*/

	str1.swap(str2);//swaps strings
	cout << str1 << "\n";

	string x;
	x+="Wdwdw";
	cout << x << "\n";
	x.insert(3,"aaaa");
	cout << x << "\n";
	x.erase(3,4);
	x.erase(x.begin());
	cout << x << "\n";
	return 0;
}
