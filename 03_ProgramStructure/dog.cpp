
#include <iostream>
#include "dog.h"

namespace C{
	using namespace std;
	void Dog::setName(char *name)
	{
		this->name = name;
	}

	int Dog::setAge(int age)
	{
		if(age>20||age<0)
		{
			this->age = 0;
			return -1;
		}
		this->age = age;
		return 0;
	}

	void Dog::printInfo(void)
	{
		cout<<"name = "<<name<<"age = "<<age<<endl;
	}

	void printVersion(void)
	{
		cout<<"Dog v1, by zhou"<<endl;
	}

}




