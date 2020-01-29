
#include <iostream>
#include "person.h"

namespace A{
	using namespace std;
	void Person::setName(char *name)
	{
		this->name = name;
	}

	int Person::setAge(int age)
	{
		if(age>150||age<0)
		{
			this->age = 0;
			return -1;
		}
		this->age = age;
		return 0;
	}

	void Person::printInfo(void)
	{
		cout<<"name = "<<name<<"age = "<<age<<endl;
	}

	void printVersion(void)
	{
		cout<<"person v1, by zhou"<<endl;
	}
}




