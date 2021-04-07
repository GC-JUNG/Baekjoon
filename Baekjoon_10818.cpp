#include<iostream>
using namespace std;

int main()
{
	int N, num = 0, MAX = -1000001, MIN = 1000001;
	
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> num;
		if (num > MAX) MAX = num;
		if (num < MIN) MIN = num;
	}
	cout << MIN << " " << MAX;
	
	return 0;
}
