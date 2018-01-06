// Katie Mays
// Dec. 14, 2017
// Prob2: grades

#include <iostream>
using namespace std;

//prototype
void stats(int[], int&, int&, int&, int&, int&, double&);

int main()
{
	// variables
	int grades[50] = {0}, counter = 0;
	string names[50]={"null"};
	int min = 0, max = 0, lowest, highest;
	double av = 0;

	//input
	for (int i = 0; i < 50; i++)
	{
		cout << "Enter a test score : ";
		cin  >> grades[i];

		if (grades[i] == -1)
			break;
		else
			counter++;
		cout << "Enter student name : ";
		cin  >> names[i];
	}

	// processing
	stats(grades, lowest, highest, counter, min, max, av);

	//output	
	cout << endl;
	cout << "The minimum score is " << min << ", " << names[lowest] << endl;
	cout << "The maximum score is " << max << ", " << names[highest] << endl;
	cout << "The average is a " << av << endl;
	cout << "Have a nice day!" << endl;

	return 0;
}

void stats(int g[], int& lowest, int& highest, int& c, int& min, int& max, double& av)
{
	min = g[0];
	max = g[0];
	highest = 0;
	lowest = 0;
	int sum = 0;

	//find minimum
	for (int i = 1; i < c; i++)
	{
		if (g[i] < min)
		{
			min = g[i];
			lowest = i;
		}
	}

	//find maximum
	for (int i = 1; i < c; i++)
	{
		if (g[i] > max)
		{
			max = g[i];
			highest = i;
		}
	}

	//find sum
	for (int i = 0; i < c; i++)
	{
		sum += g[i];
	}

	//find average
	av = (sum / c);
} 
