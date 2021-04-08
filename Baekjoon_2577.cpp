#include<iostream>

using namespace std;

int main()
{
	int A, B, C, N;
	int num[10] = { 0, };
	
	cin >> A >> B >> C;
	N = A * B * C;
	while (N != 0)
	{		
		num[N%10]++;
		N /= 10;
	}
	for (int i = 0; i < 10; i++)
		cout << num[i] << endl;

	

	return 0;
}
