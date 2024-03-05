#include <iostream>
#include "HideString.h"

DEFINE_HIDDEN_STRING(Password, 0x27, ('c')('a')('t')('s')('a')('r')('e')('c')('o')('o')('l'))

int main() {
	std::string input;

	std::cout << "Welcome to Crackme level 5, made by Nico" << std::endl << std::endl;
	std::cout << "Enter Password: ";

	std::cin >> input;

	if (input == GetPassword()) {
		std::cout << "Correct!" << std::endl;
	}
	else {
		std::cout << "Sorry, try again" << std::endl;
	}

	system("pause");

	return 0;
}
