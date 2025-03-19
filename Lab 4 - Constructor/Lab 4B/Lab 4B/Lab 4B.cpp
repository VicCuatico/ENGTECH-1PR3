/*
* Vic Cuatico
* 400507885
* 
* Lab 4
* Question 2
*/

#include <iostream>
#include <fstream>
using namespace std;

class Car
{
private:
	string owner;
	int year;
	string make;
	int speed;

public:
	Car() { owner = "", year = 0, make = "", speed = 0; }

	Car(string o, int y, string m) { 
		owner = o, year = y, make = m;
		srand(time(0));
		speed = rand()%201; 
	}

	~Car() {}

	string getO()const;
	int getY()const;
	string getM()const;
	int getS()const;

	void accel() { speed += 5; }
	void decel() { speed -= 5; }
	void update() 
	{
		srand(time(0));
		if (rand() % 2 == 0)
		{
			decel();
		}
		else 
		{
			accel();
		}
	}
};

string Car::getO()const { return owner; }
int Car::getY()const { return year; }
string Car::getM()const { return make; }
int Car::getS()const { return speed; }


int main()
{
	ifstream carFile;
	carFile.open("cars.txt");
	int speed, year;
	string owner, make;

	Car cars[5];

	if (!carFile)
	{
		cout << "Error opening file." << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		carFile >> owner >> year >> make;
		cars[i] = Car(owner, year, make);
	}

	carFile.close();

	for (int i = 0; i < 10; i++)
	{
		cout << endl << "UPDATE " << i + 1 << endl;

		for (int j = 0; j < 5; j++)
		{
			cars[j].update();
			cout << "Car " << j + 1 << endl;
			cout << "Owner: " << cars[j].getO() << endl << "Year: " << cars[j].getY() << endl << "Make: " << cars[j].getM() << endl << "Speed: " << cars[j].getS() << endl;
		}
	}

	return 0;
}
