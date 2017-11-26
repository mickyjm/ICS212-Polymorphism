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
* FILE: bird.h
*
* DESCRIPTION: Header file that contains the constructor(s),
*              destructor and the polymorphed displaydata function
*              prototypes for the bird class, a child of the
*              animal class
*
*****************************************************************/

#ifndef BIRD_H
#define BIRD_H
#include "animal.h"
class bird : public animal
{

public:
	bird();
	bird(char [], unsigned char);
	~bird();
	void displaydata();

};
#endif
