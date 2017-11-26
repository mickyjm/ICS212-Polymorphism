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
* FILE: bird.cpp
*
* DESCRIPTION: Source file that contains the constructor(s),
*              destructor and the polymorphed displaydata function
*              definitions for the bird class
*
*****************************************************************/

#include "bird.h"
#include <iostream>
using namespace std;

/*****************************************************************
*
* Function name: bird
*
* DESCRIPTION: Default constructor for the bird class. Makes
*              a bird with defult values. Accesses the animal's,
*              the parent class, protected values to store its data.
*
*****************************************************************/

bird::bird()
{

	int i;
	char quack[10] = { "quack" };

	for (i = 0; i < 10; i++)
	{
		sound[i] = quack[i];
	}

	data = 0xA;

}

/*****************************************************************
*
* Function name: bird
*
* DESCRIPTION: Second constructor for the bird class. Makes
*              a bird with given parameter values. Accesses the
*              animal's, the parent class, protected values to store
*              its data.
*
* Parameters: quack (char []): Sets sound's value with the given
*                              char array
*             flyLegs (unsigned char flyLegs): Sets data's value
*                                              with the given value
*
*****************************************************************/

bird::bird(char quack[], unsigned char flyLegs)
{

	int i;

	for (i = 0; i < 10; i++)
	{
		sound[i] = quack[i];
	}

	data = flyLegs;

}

/*****************************************************************
*
* Function name: ~bird
*
* DESCRIPTION: Destructor, deallocates the bird class
*
*****************************************************************/

bird::~bird()
{

}

/*****************************************************************
*
* Function name: displaydata
*
* DESCRIPTION: Polymorphed version of animal's, the parent class,
*              function. Displays the bird's sound, and whether 
*              or not the bird can fly
*
*****************************************************************/

void bird::displaydata()
{

	unsigned char flyMask;
	unsigned char fly;

	flyMask = 0x8;
	fly = data & flyMask;

	cout << "The bird says, \"" << sound << "\" and ";

	if (fly == 0x8)
	{
		cout << "can fly." << endl;
	}
	else
	{
		cout << "can not fly." << endl;
	}

}
