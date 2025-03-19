/*
* Vic Cuatico
* 400507885
* 
* Lab 2
* Question 2
*/

#include <iostream>
#include <iomanip>
using namespace std;

struct Budget
{
	double housing = 500.00,
		utilities = 150.00,
		household = 65.00,
		transportation = 50.00,
		food = 250.00,
		medical = 30.00,
		insurance = 100.00,
		entertainment = 150.00,
		clothing = 75.00,
		misc = 50.00;
};

Budget inputFunc();
void outputFunc(Budget ideal, Budget spent);

int main()
{
	Budget ideal, spent;

	spent = inputFunc();

	outputFunc(ideal, spent);

	return 0;
}

Budget inputFunc()
{
	Budget spent;

	cout << "Enter amount spent on housing: ";
	cin >> spent.housing;
	cout << "Enter amount spent on utilities: ";
	cin >> spent.utilities;
	cout << "Enter amount spent on household: ";
	cin >> spent.household;
	cout << "Enter amount spent on transportation: ";
	cin >> spent.transportation;
	cout << "Enter amount spent on food: ";
	cin >> spent.food;
	cout << "Enter amount spent on medical: ";
	cin >> spent.medical;
	cout << "Enter amount spent on insurance: ";
	cin >> spent.insurance;
	cout << "Enter amount spent on entertainment: ";
	cin >> spent.entertainment;
	cout << "Enter amount spent on clothing: ";
	cin >> spent.clothing;
	cout << "Enter amount spent on miscellaneous: ";
	cin >> spent.misc;

	return spent;
}

void outputFunc(Budget ideal, Budget spent)
{
	cout << fixed << setprecision(2) << endl;
	cout << "Monthly Budget Difference: Negative = Under, Positive = Over" << endl;
	cout << "HOUSING: " << spent.housing - ideal.housing << endl;
	cout << "UTILITIES: " << spent.utilities - ideal.utilities << endl;
	cout << "HOUSEHOLD EXPENSES: " << spent.household - ideal.household << endl;
	cout << "TRANSPORTATION: " << spent.transportation - ideal.transportation << endl;
	cout << "FOOD: " << spent.food - ideal.food << endl;
	cout << "MEDICAL: " << spent.medical - ideal.medical << endl;
	cout << "INSURANCE: " << spent.insurance - ideal.insurance << endl;
	cout << "ENTERTAINMENT: " << spent.entertainment - ideal.entertainment << endl;
	cout << "CLOTHING: " << spent.clothing - ideal.clothing << endl;
	cout << "MISCELLANEOUS: " << spent.misc - ideal.misc << endl;

	cout << "TOTAL: " << spent.housing - ideal.housing + spent.utilities - ideal.utilities + spent.household - ideal.household + spent.transportation - ideal.transportation + spent.food - ideal.food + spent.medical - ideal.medical + spent.insurance - ideal.insurance + spent.entertainment - ideal.entertainment + spent.clothing - ideal.clothing + spent.misc - ideal.misc;
}