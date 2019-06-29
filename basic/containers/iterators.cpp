/*
   NOTES
   1))The end iterator is pointing not to the last object, however, but to
   the first invalid object, or the object directly following the last
   one.

   2))Each STL container has member functions begin() and end() that
   return the begin and end iterators for that container.

   3))Based on these principles, c.begin() == c.end() if and only if c is
   empty, and c.end() – c.begin() will always be equal to c.size().

   4))I recommend you use ‘!=’ instead of ‘<’, and ‘empty()’ instead of
   ‘size() != 0′ — for some container types, it’s just very inefficient
   to determine which of the iterators precedes another.

   5))To create an iterator object, we must specify its type. The type of
   iterator can be constructed by a type of container by appending
   “::iterator”, “::const_iterator”, “::reverse_iterator” or
   “::const_reverse_iterator” to it.
 */
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>a;
	for(int i=0;i<100;i++)
		a.push_back(i);
	vector<int>::iterator it;
	for(it=a.begin();it!=a.end();it++)
		cout << *it << " ";
	cout << "\n";
	return 0;
}
