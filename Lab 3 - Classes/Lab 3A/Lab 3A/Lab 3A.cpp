/*
* Vic Cuatico
* 400507885
* 
* Lab 3
* Question 1
*/

#include <iostream>
#include <iomanip>
#include<string>
using namespace std;

class Employee
{
private:
	string name;
	int idNum;
	string dep;
	string pos;

public:
	Employee();
	//Mutators
	void setName();
	void setID();
	void setDep();
	void setPos();

	//Accessors
	string getName()const;
	int getID()const;
	string getDep()const;
	string getPos()const;
};

Employee::Employee()
{
	name = "";
	idNum = 0;
	dep = "";
	pos = "";
}

//implementation
void Employee::setName() { 
	string n;
	cin.clear();
	cin.ignore();
	getline(cin, n);
	name = n;
}
void Employee::setID() { 
	int id;
	cin >> id;
	idNum = id; 
}
void Employee::setDep() { 
	string d;
	cin >> d;
	dep = d;
}
void Employee::setPos() { 
	string p;
	cin >> p;
	pos = p; 
}

string Employee::getName()const { return name; }
int Employee::getID()const { return idNum; }
string Employee::getDep()const { return dep; }
string Employee::getPos()const { return pos; }

int main()
{
	Employee ea, eb, ec;
	int width = 20;

	cout << "WORKER NUMBER 1:" << endl;
	cout << "Enter Name: ";
	ea.setName();
	cout << "Enter ID Number: ";
	ea.setID();
	cout << "Enter Department: ";
	ea.setDep();
	cout << "Enter position: ";
	ea.setPos();

	cout << "WORKER NUMBER 2:" << endl;
	cout << "Enter Name: ";
	eb.setName();
	cout << "Enter ID Number: ";
	eb.setID();
	cout << "Enter Department: ";
	eb.setDep();
	cout << "Enter position: ";
	eb.setPos();

	cout << "WORKER NUMBER 3:" << endl;
	cout << "Enter Name: ";
	ec.setName();
	cout << "Enter ID Number: ";
	ec.setID();
	cout << "Enter Department: ";
	ec.setDep();
	cout << "Enter position: ";
	ec.setPos();

	cout << endl << endl << endl;
	cout << setw(width) << "NAME" << setw(width) << "ID NUMBER" << setw(width) << "DEPARTMENT" << setw(width) << "POSITION" << endl;
	cout << setw(width) << ea.getName() << setw(width) << ea.getID() << setw(width) << ea.getDep() << setw(width) << ea.getPos() << endl;
	cout << setw(width) << eb.getName() << setw(width) << eb.getID() << setw(width) << eb.getDep() << setw(width) << eb.getPos() << endl;
	cout << setw(width) << ec.getName() << setw(width) << ec.getID() << setw(width) << ec.getDep() << setw(width) << ec.getPos() << endl;

	return 0;
}