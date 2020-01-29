
#include <stdio.h>
#include "person.h"
#include "dog.h"

using namespace A;
using namespace C;

int main(int argc, char **argv)
{
	Person per;
	per.setName("zhangsan");
	per.setAge(200);
	per.printInfo();

	Dog dog;
	dog.setName("wangzai");
	dog.setAge(21);
	dog.printInfo();

	A::printVersion();
	C::printVersion();
	
	return 0;
}






