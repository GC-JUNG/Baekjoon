#include <string>
#include <iostream>

using namespace std;

int main() {
	string word;
	string croatia[8] = { "c=", "c-","dz=","d-","lj","nj","s=","z=" };

	cin >> word;

	for (int i = 0; i < word.length(); i++) {
		for (int j = 0; j < 8; j++)
			if (word.find(croatia[j]) != string::npos)
			{
				if (croatia[j] == "dz=") {
					word.replace(word.find(croatia[j]), 3, "0"); 
					break;
				}
				else 
					word.replace(word.find(croatia[j]), 2, "0");		
			}
	}

	cout << word.length();

	return 0;
}
