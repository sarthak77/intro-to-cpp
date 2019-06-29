#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a="hello";
	cout << a.capacity() << "\n";
	/*
	   This function returns the capacity allocated to the string, which
	   can be equal to or more than the size of the string. Additional
	   space is allocated so that when the new characters are added to the
	   string, the operations can be done efficiently.
	 */

	a.resize(4);//to change the size of string
	cout << a << "\n";
	cout << a.capacity() << "\n";
	a.shrink_to_fit();
	/*
	   This function decreases the capacity of the string and makes it
	   equal to its size. This operation is useful to save additional
	   memory if we are sure that no further addition of characters have
	   to be made.
	 */
	cout << a.capacity() << "\n";//shrink to fit not working
	cout << a.size() << "\n";
	return 0;
}
