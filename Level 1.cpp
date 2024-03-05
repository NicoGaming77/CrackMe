#include <iostream>

int main() {
	std::string input;

	std::cout << "Welcome to Crackme level 1, made by Nico" << std::endl << std::endl;
	std::cout << "Enter Password: ";

	std::cin >> input;

	if (input == "123456") {
		std::cout << "Correct!" << std::endl;
	}
	else {
		std::cout << "Sorry, try again" << std::endl;
	}

	system("pause");

	return 0;
}
