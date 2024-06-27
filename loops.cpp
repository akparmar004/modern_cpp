#include<iostream>
#include<array>
#include<algorithm>

int main()
{
	int arr[] = {1,2,3};
	
	std::array<int,4> arr2{1,2,3,4};
	
	//for(int i = 0; i < 3; i++)
		//std::cout << arr[i] << std::endl;

	//range based loop
	for(int i : arr2)
	{
		std::cout << i << std::endl;
	}
	
	std::array<int, 5> myArr;
	std::fill(std::begin(myArr),std::end(myArr),1024);
	for(auto ele : myArr)
		std::cout << ele << std::endl;

	return 0;
}
