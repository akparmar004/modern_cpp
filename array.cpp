#include<iostream>
#include<numeric>
#include<iterator>
#include<array>

int main()
{
	//int ids[100];

	std::array<int,100> ids;

	std::iota(std::begin(ids), std::end(ids),0);
	//ids.at(1000) = 9;
	std::cout << ids.at(10) << std::endl;
	//for(int i = 0; i < 100; i++)
		//ids[i] = i;
	//for(int i = 0; i < 100; i++)
		//std::cout << ids[i] << std::endl;

	return 0;
}
