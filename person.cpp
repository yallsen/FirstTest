/* test git 202001272359*/
/* test git 202001272353*/
/* test git 202001272357*/

/* test git repair bug 202001280114*/

/* test git branch dev 202001280107*/
>>>>>>> dev
#include <stdio.h>

class Person{
	private:
		char *name;
		int  age;
		char *work;
	
	public:
		void setName(char *n)
		{
			name = n;
		}
		
		int setAge(int a)
		{
			if(a<0||a>150)
			{
				age = 0;
				return -1;
			}
			age = a;
			return 0;
		}
		void printInfo(void)
		{
			printf("name = %s, age = %d, work =%s\n", name, age, work);
		}
};


int main(int argc, char **argv)
{
	Person per;
	
	per.setName("zhangsan");
	per.setAge(200);
	per.printInfo();
	
	return 0;
}
