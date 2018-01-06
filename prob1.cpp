//Katie Mays
//Dec. 14, 2017
//Prob 1: phone number

#include <iostream>
using namespace std;

//prototype
void valid_check(string, int&);

int main()
{
	// variables
	string phonenum, repeat;
	int valid = 0;

	do {
		// input
		cout << "Enter a telephone string ie. 123-456-7890 : ";
		cin  >> phonenum;

		// processing
		valid_check(phonenum, valid);

		if (valid == 1)
			cout << "This is in a valid telephone number format!" << endl;
		else
			cout << "This is NOT in a valid telephone number format!" << endl;

		//ask to rerun
		cout << "Check another telephone number (yes/no)? ";
		cin  >> repeat;

	} while ((repeat == "YES") || (repeat == "yes") || (repeat == "Yes"));

	//exit greeting
	cout << "Have a nice day!" << endl;

	return 0;
}

void valid_check(string s, int& valid)
{
	if ((s.at(3) == '-') && (s.at(7) == '-'))
		valid = 1; 
	else
		valid = 0;
}
