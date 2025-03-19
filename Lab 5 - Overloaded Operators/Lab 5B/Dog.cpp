#include "Dog.h"

Dog::Dog() { breed = "", age = 0, sex = "", maturity = ""; }
Dog::Dog(string b, int a, string s, string m) { breed = b, age = a, sex = s, maturity = m; }

void Dog::setS(string s) { sex = s; }
string Dog::getB() { return breed; }
int Dog::getA() { return age; }
string Dog::getS() { return sex; }
string Dog::getM() { return maturity; }

void Dog::fixDog(Dog x) { x.setS("Fixed"); }

Dog Dog::operator+(Dog x) {
	if (x.getS() == "Fixed" or sex == "Fixed" or x.getS() == sex ) {
		Dog baby;
		return baby;
	}

	else if (breed == x.getB()) {
		Dog baby(breed, 0, "Female", "Puppy");
		return baby;
	}

	else {
		Dog baby;
		Dog baby("Cross", 0, "Female", "Puppy");
	}
}

ostream& operator<<(ostream& out, Dog obj) {
	out << "NEW DOG" << endl;
	out << "Breed: " << obj.getB() << endl;
	out << "Age: " << obj.getA() << endl;
	out << "Sex: " << obj.getS() << endl;
	out << "Maturity: " << obj.getM() << endl;

	return out;
}