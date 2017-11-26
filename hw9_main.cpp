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
* FILE: hw9.cpp
*
* DESCRIPTION: Main source file that runs the program and tests
*              for polymorphism with the parent and child classes
*
*****************************************************************/

#include "animal.h"
#include "bird.h"
#include "cow.h"
#include <vector>
#include <string>
#include <iostream>
#include <map>
using namespace std;

/*****************************************************************
*
* Function name: animaldisplaydata
*
* DESCRIPTION: Calls displaydata function from the given animal
*              class or given child class, the bird or cow.
*
* Parameters: a (animal *):
*
*****************************************************************/

void animaldisplaydata(animal *);

int main(int argc, char *argv[])
{

	vector <animal *> zoo;
	map<string, animal *> barn;

	zoo.push_back(new cow);
	zoo.push_back(new bird);

	barn["Cow"] = new cow("moo", 0x6);
	barn["Bird"] = new bird("quack", 0xC);

	animaldisplaydata(zoo.front());
	animaldisplaydata(zoo.back());

	animaldisplaydata(barn["Cow"]);
	animaldisplaydata(barn["Bird"]);

}

void animaldisplaydata(animal *a)
{

	a->displaydata();

}
