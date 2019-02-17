#include<iostream>
#include<vector>

#define sz(a) (int)a.size()

using namespace std;

int main()
{
	vector<int>a(10);//dont use []
	//we can also create vector of unknown size and then push_back to
	//add elements
	for(int i=0;i<10;i++)
	{
		a[i]=i;
		cout << a[i] << " ";
	}
	cout << "\n";
	cout << a.size() << "\n";//to get size of vector
	/*
	   size() is unsigned, which may sometimes cause problems. Accordingly,
	   I usually define macros, something like sz(C) that returns size of
	   C as ordinal signed int.
	 */
	cout << sz(a) << "\n";

	cout << a.front() << " " << a.back() << " " << a.at(3) << "\n";

	/*
	it’s not a good practice to compare v.size() to zero if you want to
	know whether the container is empty. You’re better off using
	empty() function:
	This is because not all the containers can report their size in
	O(1), and you definitely should not require counting all elements
	in a double-linked list just to ensure that it contains at least
	one.
	*/
	cout << a.empty() << "\n";//0 for non empty

	a.push_back(10);//add an element at the end
	for(int i=0;i<11;i++)
	{
		a[i]=i;
		cout << a[i] << " ";
	}
	cout << "\n";

	vector<int> b(10);
	for (int i=0;i<10;i++)
	{
		b[i]=i;
	}
	b.resize(15);//change the size
	for(int i=10;i<15;i++)
	{
		b[i]=i;
	}
/*
Note that if you use push_back() after resize(), it will add elements
AFTER the newly allocated size, but not INTO it.
a.resize(15)
a.push_back(7)
7 will come at 15th index not at the 10th
*/

for(int i=0;i<15;i++)
	{
		b[i]=i;
		cout << b[i] << " ";
	}
	cout << "\n";
	b.clear();//clears the vector
	cout << b.empty() << "\n";

	vector <int> c(10);//initializes with 0
	vector <int> d(10,1);//initializes with 1
	for(int i=0;i<10;i++)
	{
		cout << c[i] << " ";
		cout << d[i] << " ";
	}
	cout << "\n";

	vector<int> m;
	vector<int> n=m;
	vector<int> p(n);
	//m,n,p all equal


	vector<int>aa(3);
	aa[0]=1;
	aa[1]=132;
	aa[2]=14;
	vector<int>ab(aa.begin(),aa.end());//ab=aa

	return 0;
}
