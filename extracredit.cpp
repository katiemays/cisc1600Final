// Katie Mays
// Dec 14. 2017
// extra cred: surveys

#include <iostream>
using namespace std;

//prototypes
void input_ISSUES(string[]);
void input_RATINGS(string[], float[], float[]);
void stats(string[], float[], int&, float[], float[]);

int main()
{
	// variables
	string issues[5];
	float ratings[5];
	string repeat;
	int survey_number = 1;
	float sum[5] = {0}, av[5] = {0};

	//call input functions to get topics
	input_ISSUES(issues);
	cout << endl;

	//survey time
	do {
		cout << "Survey Entry #" << survey_number << endl;

		//call input function to get topic ratings
		input_RATINGS(issues, ratings, sum);
		cout << endl;
	
		//ask for another survey
		cout << "Do you want to take the survey again? (Yes/No) : ";
		cin  >> repeat;
		cout << endl;

		survey_number++;

	} while ((repeat == "yes") || (repeat == "Yes"));

	//stats on the surveys
	stats(issues, ratings, survey_number, sum, av);
	cout << endl;

	//exit greeting
	cout << "Goodbye!" << endl;
 
	return 0;
}

void input_ISSUES(string iss[])
{
	cout << "Enter 5 current issues to rate: " << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter topic (Politics, Economy, etc.) : ";
		cin  >> iss[i]; 
	}
}
void input_RATINGS(string iss[], float r[], float sum[])
{
	cout << "Please rank the following issues on their importance to you, where 1 is least important and 10 is most important: " << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << iss[i] << ": ";
		cin  >> r[i];
		
		sum[i] += r[i];
	}
}
void stats(string iss[], float r[], int& n, float sum[], float av[])
{
	//average calculation
	for (int i = 0; i < 5; i++)
	{
		av[i] = (sum[i] / (n-1));
	}
	
	cout << "Results for " << n-1 << " entries :" << endl;
	cout << "Topics\t\tTotal\t\tAverage\t\tEntry " << endl;
	cout << "------\t\t-----\t\t-------" << endl;

	//go through each topic
	for (int i = 0; i < 5; i++)
	{
		cout << iss[i] << "\t\t" << sum[i] << "\t\t" << av[i] << endl;
	}
}
