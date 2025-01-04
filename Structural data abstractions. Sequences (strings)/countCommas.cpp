#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	string text;
	int countComma = 0;

	cout << "Enter symbol: ";
	getline(cin, text);

	for (size_t i = 0; i < text.length(); i++)
	{
		if (text[i] == ',')
		{
			countComma++;
		}
	}

	cout << "Count of comma: " << countComma << endl;
	return 0;
}