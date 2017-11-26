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
* FILE: cow.h
*
* DESCRIPTION: Header file that contains the constructor(s),
*              destructor and the polymorphed displaydata function
*              prototypes for the cow class, a child of the
*              animal class
*
*****************************************************************/

#ifndef  COW_H
#define COW_H
#include "animal.h"
class cow : public animal
{
	
public:
	cow();
	cow(char[], unsigned char);
	~cow();
	void displaydata();

};
#endif
