/*****************************************************************
*
* NAME: Michael Mangrobang
*
* HOMEWORK: 9
*
* CLASS: ICS 212
*
* INSTRUCTOR: Ravi Narayan
*
* DATE: December 03, 2015
*
* FILE: cow.cpp
*
* DESCRIPTION: Source file that contains the constructor(s),
*              destructor and the polymorphable displaydata function
*              definitions for the animal class.
*
*****************************************************************/

#include "animal.h"
#include <iostream>
using namespace std;

/*****************************************************************
*
* Function name: animal
*
* DESCRIPTION: Default constructor for the animal class. Makes
*              a animal with defult values. Accesses the animal's,
*              the parent class, protected values to store its data.
*
*****************************************************************/

animal::animal()
{

	int i;
	char call[10] = { "Hello" };

	for (i = 0; i < 10; i++)
	{
		sound[i] = call[i];
	}

	data = 0x2;

}

/*****************************************************************
*
* Function name: animal
*
* DESCRIPTION: Second constructor for the animal class. Makes
*              an animal with given parameter values
*
* Parameters: call (char []): Sets sound's value with the given
*                             char array
*             flyLegs (unsigned char flyLegs): Sets data's value
*                                              with the given value
*
*****************************************************************/

animal::animal(char call[], unsigned char flyLegs)
{

	int i;

	for (i = 0; i < 10; i++)
	{
		sound[i] = call[i];
	}

	data = flyLegs;

}

/*****************************************************************
*
* Function name: ~animal	
*
* DESCRIPTION: Destructor, deallocates the animal class
*
*****************************************************************/

animal::~animal()
{

}

/*****************************************************************
*
* Function name: displaydata
*
* DESCRIPTION: A function that can be polymorphed from the child
*              classes. Displays the animal's sound, and whether
*              or not the animal can fly
*
*****************************************************************/

void animal::displaydata()
{

	unsigned char flyMask;
	unsigned char fly;

	flyMask = 0x8;
	fly = data & flyMask;

	cout << "The animal says, \"" << sound << ", and I am an animal that ";

	if (fly == 0x8)
	{
		cout << "does fly." << endl;
	}
	else
	{
		cout << "does not fly." << endl;
	}
	
}
