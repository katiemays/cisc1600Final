// Katie Mays
// Dec. 12, 2017
// More Numbers play

#include <iostream>
using namespace std;

//prototypes
void input(int [], int&, int&);
void display(int [], int&);
void stats(int [], int&, int&, int&, int&, int&);
void count(int [], int&, int&, int&);
void search(int [], int&, int&, int&);
void replace(int [], int&, int&, int&, int&);
void modify(int [], int&, int&, int&);
void clear(int [], int&, int&);

int main()
{
	//variables
	int numbers[100] = {0};
	int counter = 0, temp = 0;
	int min = 0, max = 0, sum = 0, av = 0;
	int query = 0, occurrences = 0;
	int position = 0;
	int newnum = 0, found = 0;

	// greeting
	cout << "Welcome to the world of arrays!" << endl;
	cout << "Enter as many positive numbers you would like, up to 100 inputs, to stop finish your inputs enter 0." << endl;
	cout << endl;

	input(numbers, temp, counter);
	display(numbers, counter);
	
	stats(numbers, counter, min, max, sum, av);
	//stats output
	cout << endl;
	cout << "Smallest number : " << min << endl;
	cout << " Largest number : " << max << endl;
	cout << "            Sum : " << sum << endl;
	cout << "        Average : " << av  << endl;
	cout << endl;

	//count input
	cout << "What number would you like to count : ";
	cin  >> query;
	//count processing
	count(numbers, counter, query, occurrences);
	//count output
	cout << "The number " << query << " appears " << occurrences << " time(s)." << endl;
	cout << endl;

	//search input
	cout << "What number would you like to find : ";
	cin  >> query;
	//search processing
	search(numbers, counter, query, position);
	//search output
	cout << "The number " << query << " is located at position " << position << "." << endl;
	cout << endl;

	//replace input
	cout << "What number would you like to replace : ";
	cin  >> query;
	cout << "                  Enter the new value : ";
	cin  >> newnum;
	//processing
	replace(numbers, counter, query, newnum, found);
	//output
	cout <<	"The number " << query << " was replaced " << found << " time(s)." << endl;
	cout << endl;
	display(numbers, counter);
	cout << endl;

	//modify input
	cout << "What position would you like to modify : ";
	cin  >> query;
	do {	
		//check for significant position
		if (query > counter)
		{
			cout << "There is no value at position " << query << " please enter a number between 1 and " << counter << "." << endl;
			cout << "Try another : ";
			cin  >> query;
		}
	} while (query > counter);
	cout << "Enter the new value: ";
	cin  >> newnum;
	//processing
	modify(numbers, counter, query, newnum);
	//output
	cout << endl;
	display(numbers, counter);
	cout << endl;

	//input
	cout << "Enter the position you want cleared, or -1 to clear entire array : ";
	cin  >> query;
	do {
		//check for significant position
		if (query > counter)
		{
			cout << "There is no value at position " << query << " please enter a number between 1 and " << counter << "." << endl;
			cout << "Try another : ";
			cin  >> query;
		}
	} while (query > counter);
	//processing
	clear(numbers, counter, query);
	//output
	cout << endl;
	display(numbers, counter);
	cout << endl;
	
	return 0;
}
void input(int a[], int& t, int& c)
{
	for (int i = 0; i < 100; i++)
	{
		cout << "Enter input " << i+1 << " : ";
		cin  >> t;
		if (t > 0)
		{
			a[i] = t;
			c++;
		}
		else
		{
			cout << endl;
			break;
		}
	}
}
void display(int a[], int& c)
{
	cout << "Current list:" << endl;
	cout << "Position\tInput" << endl;
	cout << "~~~~~~~~\t~~~~~" << endl;

	for (int i = 0; i < c; i++)
	{
		cout << i+1 << ".\t\t" << a[i] << endl;
	}
}
void stats(int a[], int& c, int& min, int& max, int& sum, int& av)
{
	min = a[0];
	max = a[0];

	//find minimum
	for (int i = 1; i < c; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	
	//find maximum
	for (int i = 1; i < c; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}	
	
	//find sum
	for (int i = 0; i < c; i++)
	{
		sum += a[i];
	}

	//find average
	av = (sum / c);
}
void count(int a[], int& c, int& q, int& o)
{
	for (int i = 0; i < c; i++)
	{
		if (a[i] == q)
			o++;
	}
}
void search(int a[], int& c, int& q, int& p)
{
	for (int i = 0; i < c; i++)
	{
		if (a[i] == q)
		{
			p = i+1;
			break;
		}
	}
}
void replace(int a[], int& c, int& q, int& n, int& f)
{
	for (int i = 0; i < c; i++)
	{
		if (a[i] == q)
		{
			a[i] = n;
			f++;
		}
	}
}
void modify(int a[], int& c, int& q, int& n)
{
	for (int i = 0; i < c; i++)
	{
		if (i+1 == q)
		{
			a[i] = n;
		}
	}
}
void clear(int a[], int& c, int& q)
{
	if (q == -1)
	{
		for (int i = 0; i < c; i++)
		{
			a[i] = 0;
		}
	}
	else
	{	for (int i = 0; i < c; i++)
		{
			if (i+1 == q)
			{
				a[i] = 0;
			}
		}
	}
}
