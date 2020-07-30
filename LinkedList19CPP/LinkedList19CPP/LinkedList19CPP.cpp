//#include <iostream>
#include "LinkedList.h"
//#include <string>

int main()
{
	std::cout << "Enter in a value \n";
	std::string input;
	std::getline(std::cin, input);
	LinkedList<std::string> linkedList{};

	std::cout << "Enter in a value \n";
	std::string input2;
	std::getline(std::cin, input2);

	linkedList.AddLast(input);
	linkedList.AddLast(input2);

	auto result = linkedList.Search(input2);

	return 0;
}
