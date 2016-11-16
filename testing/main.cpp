#include <iostream>
#include <string

class Test
{
public:
	Test()
	{
		std::cout << "Test()" << std::endl;
	}

	meow(std::string msg)
	{
		std::cout << "Meow, " << msg << ", Meow!" << std::endl;
	}
}

int main()
{
	std::cout << "Hello world!" << std::endl;

	Test * test = new Test();
	test->meow();

	return 0;
}
