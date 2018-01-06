// katie mays
// code for random number

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	// init 
	srand(time(0));

	//vars
	int dice, side;
	int ranNum = rand();
	char coin;

	//processing
	dice = (ranNum % 6) + 1;
	side = ranNum % 2;
	if (side == 0)
		coin = 'H';
	else 
		coin = 'T';

	//output
	cout << "Dice roll : " << dice << endl;
	cout << "Coin toss : " << coin << endl;
	
	return 0;
}
