// katie mays
// shape practice redo

#include <iostream> 
using namespace std;

int main()
{
	//variables
	int s;
	char x;
	int row, colm;

	//input
	cout << " Enter square shape side's length : ";
	cin  >> s;
	cout << "Enter a character to fill in with : ";
	cin  >> x;

	//output and processing
	for (row = 0; row < s; row++)
	{
		for (colm = 0; colm < s; colm++)
		{
			cout << x << " ";
		}

		cout << endl;
	}

	return 0;
}

