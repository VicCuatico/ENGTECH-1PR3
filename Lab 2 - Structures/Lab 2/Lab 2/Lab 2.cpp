/*
* Vic Cuatico
* 400507885
* 
* Lab 2
* Question 1
*/

#include <iostream>
using namespace std;

struct Data
{
	double rain;
	double htemp;
	double ltemp;
	double avgtemp;
};

int main()
{
	const int months = 12;
	double totalrain = 0,
		avgtemp = 0,
		highesttemp = -100,
		lowesttemp = 140;
	int lowindex, highindex;

	string monthnames[months] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };

	Data monthlyData[months];

	for (int i = 0; i < months; i++)
	{
		cout << monthnames[i] << " Data Input." << endl;

		do
		{
			cout << "Enter the total rainfal: ";
			cin >> monthlyData[i].rain;
		} while (monthlyData[i].rain < 0);

		do
		{
			cout << "Enter the highest temperature: ";
			cin >> monthlyData[i].htemp;
			cout << "Enter the lowest temperature: ";
			cin >> monthlyData[i].ltemp;

			if ((monthlyData[i].htemp < -100 or monthlyData[i].htemp > 140) or (monthlyData[i].ltemp < -100 or monthlyData[i].ltemp > 140))
			{
				cout << "ERROR: Invalid temperature. Please try again" << endl;
			}
		} while ((monthlyData[i].htemp < -100 or monthlyData[i].htemp > 140) or (monthlyData[i].ltemp < -100 or monthlyData[i].ltemp > 140));

		monthlyData[i].avgtemp = (monthlyData[i].htemp + monthlyData[i].ltemp) / 2;

		cout << endl;
	}

	for (int i = 0; i < months; i++)
	{
		totalrain += monthlyData[i].rain;
		avgtemp += monthlyData[i].avgtemp;
		
		if (highesttemp < monthlyData[i].htemp)
		{
			highesttemp = monthlyData[i].htemp;
			highindex = i;
		}

		if (lowesttemp > monthlyData[i].ltemp)
		{
			lowesttemp = monthlyData[i].ltemp;
			lowindex = i;
		}
	}

	cout << "DATA:" << endl;
	cout << "Total rainfall: " << totalrain << endl;
	cout << "Average rainfall: " << totalrain / 12 << endl;
	cout << "Highest temperature: " << monthnames[highindex] << " " << highesttemp << endl;
	cout << "Lowest temperature: " << monthnames[lowindex] << " " << lowesttemp << endl;
	cout << "Average temperature: " << avgtemp / 12 << endl;

	return 0;
}