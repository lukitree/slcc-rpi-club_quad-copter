#include <iostream>
#include <string>

class Test
{
public:
	Test()
	{
		std::cout << "Test()" << std::endl;
	}

	void meow(std::string msg)
	{
		std::cout << "Meow, " << msg << ", Meow!" << std::endl;
	}
};

int main()
{
	Test * test = new Test();
	test->meow("Woof");

	return 0;
}
