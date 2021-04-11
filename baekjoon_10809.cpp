#include <iostream>
#include<string>

using namespace std;

int main()
{
	string S;
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	cin >> S;
	for (int i = 0; i < alphabet.size(); i++) {				
		if (S.find(alphabet[i]) != string::npos)
			cout << S.find(alphabet[i]) << endl;
		else
			cout << "-1" << endl;		
	}
	return 0;
}