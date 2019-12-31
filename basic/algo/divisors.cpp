#include <bits/stdc++.h> 
using namespace std;

void finddivisors(int n) 
{ 
	for (int i=1; i<=sqrt(n); i++) 
	{ 
		if (n%i == 0) 
		{ 
			//when n is square of some number 
			if(n/i==i) 
                cout << i << " ";
			else
                cout << i << " " << n/i << " ";
		} 
	}
    cout << "\n";
} 

int main() 
{ 
    int n;
    cin >> n;
	finddivisors(n); 
	return 0; 
} 
