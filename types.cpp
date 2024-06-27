#include<iostream>

int main()
{
	int64_t x = 109273824343;
	
	std::cout << x << std::endl;
	std::cout << sizeof(x) << std::endl;

	char a = 'a';
	std::cout << a << std::endl;

	const char* b = "abc";
	std::cout << b << std::endl;

	std::string c = "ccc";
	std::cout << c << std::endl;
	return 0;
}
