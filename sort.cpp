// katie mays
// sort practice redo decreasing numbers

#include <iostream>
using namespace std;

//prototype
void sort(int[]);

int main()
{
	// variables
	int numbers[10]={0};

	// input
	for (int i = 0; i < 10; i++)
	{
		cout << "Input number " << i+1 << " : ";
		cin  >> numbers[i];
		cout << endl;
	}	

	// processing
	sort(numbers);

	//output
	cout << "Sorted numbers : ";

	for (int i = 0; i < 10; i++)
	{
		cout << numbers[i] << " ";
	}

	cout << endl;

	return 0;
}

void sort(int a[])
{
	//local variable
	int temp = 0;
	for (int j = 0; j < 10; j++)
	{
		for (int i = j+1; i < 10; i++)
		{
			if (a[i] < a[j])
			{
				//swap
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
}
