#pragma once
#include <iostream>
using namespace std;

class Dog
{
private:
	string breed;
	int age;
	string sex;
	string maturity;

public:
	Dog();
	Dog(string b, int a, string s, string m);
	
	void setS(string s);

	string getB();
	int getA();
	string getS();
	string getM();

	void fixDog(Dog x);
	Dog operator+(Dog x);
};
ostream& operator<<(ostream& out, Dog obj);