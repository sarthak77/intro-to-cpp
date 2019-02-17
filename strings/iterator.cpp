/*
begin() :- This function returns an iterator to beginning of the string.
end() :- This function returns an iterator to end of the string.
rbegin() :- This function returns a reverse iterator pointing at the end of string.
rend() :- This function returns a reverse iterator pointing at beginning of string.
*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
	// Initializing string` 
	string str = "geeksforgeeks"; 

	// Declaring iterator 
	std::string::iterator it; 

	// Declaring reverse iterator 
	std::string::reverse_iterator it1; 

	// Displaying string 
	cout << "The string using forward iterators is : "; 
	for (it=str.begin(); it!=str.end(); it++) 
		cout << *it; 
	cout << endl; 

	// Displaying reverse string 
	cout << "The reverse string using reverse iterators is : "; 
	for (it1=str.rbegin(); it1!=str.rend(); it1++) 
		cout << *it1; 
	cout << endl; 
	return 0;
}
