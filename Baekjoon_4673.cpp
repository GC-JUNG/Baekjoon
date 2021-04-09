#include <iostream>

using namespace std;

int not_selfnumber(int num)
{
	int temp = num;
	int sum = 0;

	while (temp != 0) {
		sum += temp % 10;
		temp /= 10;
	}

	if (num + sum > 10000)
		return 0;
	else return num + sum;
}

int main()
{
	int num[10001] = {0,};
		
	for (int i = 0; i < 10000; i++)
	{
		num[not_selfnumber(i)] = 1;
	}

	for (int j=0; j < 10000; j++)
	{
		if (num[j] == 0)
			cout << j << endl;;
	}
	
	return 0;
}



