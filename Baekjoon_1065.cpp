#include <iostream>

using namespace std;

int d(int num)
{
	int L, C, R;
	
	L = num / 100;
	C = num / 10 % 10;
	R = num % 10;

	if ((R - C == C - L) || num < 100)
		return 1;
	else return 0;
	
}

int main()
{
	int N;
	int cnt = 0;
	cin >> N;
	
	for (int i = 1; i <= N; i++)
	{
		if (d(i) == 1) cnt++;		
	}
	cout << cnt << endl;

	return 0;
}



