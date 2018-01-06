// katie mays
// shape practice redo

#include <iostream> 
using namespace std;

int main()
{
	//variables
	int s;
	char x;
	int row, colm, colmax;

	//input
	cout << " Enter triangle shape side's length : ";
	cin  >> s;
	cout << "  Enter a character to fill in with : ";
	cin  >> x;

	//init
	colmax = s;

	//output and processing
	for (row = 0; row < s; row++)
	{
		for (colm = 0; colm < colmax; colm++)
		{
			cout << x << " ";
		}
		colmax--;
		cout << endl;
	}

	return 0;
}

