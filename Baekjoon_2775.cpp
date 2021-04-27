#include <iostream>
using namespace std;

int main()
{
	int T, k, n;
	cin >> T;
	
	for (int i = 0; i < T; i++)
	{
		int pp[15][15] = { 0 };

		cin >> k >> n;

		for (int j = 0; j < n; j++)		
			pp[0][j] = j + 1;
		
		for (int j = 1; j <= k; j++)
			for (int r = 0; r < n; r++)		
				for (int q = 0; q <= r; q++)
					pp[j][r] += pp[j - 1][q];
					
		cout << pp[k][n - 1] << endl;
	}
	return 0;
}