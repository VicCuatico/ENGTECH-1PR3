/*
* Vic Cuatico 
* 400507885
* 
* Lab 5
* Question 2
*/

#include <iostream>
#include "Dog.h"
using namespace std;

int main()
{
	
	Dog d1("Golden Retriever", 1, "Male", "Adult");
	Dog d2("Labrador Retriever", 1, "Female", "Adult");
	Dog d3("German Shepard", 1, "Fixed", "Adult");
	Dog d4("German Shepard", 1, "Fixed", "Adult");

	Dog d5 = d1 + d2;
	Dog d6 = d3 + d4;

	cout << d5 << endl;
	cout << d6 << endl;
}