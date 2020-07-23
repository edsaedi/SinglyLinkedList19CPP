//#include <iostream>
#include "LinkedList.h"
//#include <string>

int main()
{
	std::cout << "Enter in a value \n";
	std::string input;
	std::getline(std::cin, input);
	LinkedList<std::string> linkedList{};

	linkedList.AddFirst(input);

	return 0;
}
