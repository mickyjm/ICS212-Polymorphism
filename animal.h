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
* FILE: animal.h
*
* DESCRIPTION: Header file that contains the constructor(s),
*              destructor and the polymorphed displaydata function
*              prototypes for the animal class. It is also the
*              parent class of both the bird and cow classes
*
*****************************************************************/

#ifndef ANIMAL_H
#define ANIMAL_H
class animal
{

protected:
	char sound[10];
	unsigned char data;

public:
	animal();
	animal(char[], unsigned char);
	~animal();
	virtual void displaydata();

};
#endif
