#include<iostream>
#include<vector>

#define sz(a) (int)a.size()

using namespace std;

int main()
{
	int m,n;
	cin >> m >> n;
	vector<vector<int>> matrix(m,vector<int>(n,0));//m*n matrix of 0's
	for(int i=0;i<matrix.size();i++)
	{
		for(int j=0;j<matrix[1].size();j++)
			cout << matrix[i][j];
		cout << "\n";
	}
	cout << "\n";
	return 0;
}
