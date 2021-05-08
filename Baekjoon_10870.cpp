#include<iostream>

using namespace std;

int main()
{
	int N, sum = 0;
	int arr[21] = { 0, 1 };
	
	for (int i = 2; i <= 20; i++)
	{
		arr[i] = arr[i - 2] + arr[i - 1];
	}

	cin >> N;
	cout << arr[N];
	return 0;
}