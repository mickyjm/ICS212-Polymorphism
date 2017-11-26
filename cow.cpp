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
*              destructor and the polymorphed displaydata function
*              definitions, for the cow class
*
*****************************************************************/

#include "cow.h"
#include <iostream>
using namespace std;

/*****************************************************************
*
* Function name: cow
*
* DESCRIPTION: Default constructor for the cow class. Makes
*              a cow with defult values. Accesses the animal's,
*              the parent class, protected values to store its data.
*
*****************************************************************/

cow::cow()
{
	
	int i;
	char moo[10] = { "moo" };

	for (i = 0; i < 10; i++)
	{
		sound[i] = moo[i];
	}

	data = 0x4;

}

/*****************************************************************
*
* Function name: cow
*
* DESCRIPTION: Second constructor for the cow class. Makes
*              a cow with given parameter values. Accesses the 
*              animal's, the parent class, protected values to store 
*              its data.
*
* Parameters: moo (char []): Sets sound's value with the given
*                            char array
*             flyLegs (unsigned char flyLegs): Sets data's value
*                                              with the given value
*
*****************************************************************/

cow::cow(char moo[], unsigned char flyLegs)
{

	int i;

	for (i = 0; i < 10; i++)
	{
		sound[i] = moo[i];
	}

	data = flyLegs;

}

/*****************************************************************
*
* Function name: ~cow
*
* DESCRIPTION: Destructor, deallocates the cow class
*
*****************************************************************/

cow::~cow()
{

	

}

/*****************************************************************
*
* Function name: displaydata
*
* DESCRIPTION: Polymorphed version of animal's, the parent class,
*              function. Displays the cow's sound, number of legs
*              and whether or not the cow can fly
*
*****************************************************************/

void cow::displaydata()
{

	unsigned char flyMask;
	unsigned char legMask;
	unsigned char fly;
	unsigned char legs;

	flyMask = 0x8;
	legMask = 0x7;
	fly = data & flyMask;
	legs = data & legMask;

	cout << "The cow says, \"" << sound << "\", has " << (int)legs << " legs and ";

	if (fly == 0x8)
	{
		cout << "does fly." << endl;
	}
	else
	{
		cout << "does not fly." << endl;
	}

}
