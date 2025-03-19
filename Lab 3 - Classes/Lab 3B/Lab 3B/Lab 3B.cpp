/*
* Vic Cuatico
* 400507885
* 
* Lab 3
* Question 2
*/

#include <iostream>
using namespace std;

class Coin
{
private:
	string sideUp;

public:
	Coin();
	void toss();
	string getSideUp();
};

Coin::Coin()
{
	sideUp = "HEADS";
}

void Coin::toss() {
	if (rand() % 2 == 1)
	{
		sideUp = "HEADS";
	}
	else
	{
		sideUp = "TAILS";
	}
}

string Coin::getSideUp() { return sideUp; }

int main()
{
	Coin obj;
	int count = 0;

	srand(time(0));

	for (int i = 0; i < 20; i++)
	{
		obj.toss();

		cout << obj.getSideUp() << endl;
		if (obj.getSideUp() == "HEADS")
		{
			count += 1;
		}
	}

	cout << endl << "HEADS COUNT: " << count << endl;

	return 0;
}

