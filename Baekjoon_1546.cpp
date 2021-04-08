#include<iostream>

using namespace std;

int main()
{
	int N;
	int M = 0;
	float sum = 0;
	float avr = 0;
	int score[1000] = {0,};
	
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> score[i];
		if (score[i] > M) M = score[i];
		sum += score[i];
	}
	avr = sum / M * 100 / N;

	cout << avr << endl;
	
	return 0;
}
