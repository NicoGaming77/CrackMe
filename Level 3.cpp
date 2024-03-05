#include <iostream>

int main() {
	std::string password = "password123";
	std::string input;

	std::cout << "Welcome to Crackme level 3, made by Nico" << std::endl << std::endl;
	std::cout << "Enter Password: ";

	std::cin >> input;

	std::reverse(password.begin(), password.end());
	if (input == password) {
		std::cout << "Correct!" << std::endl;
	}
	else {
		std::cout << "Sorry, try again" << std::endl;
	}

	system("pause");

	return 0;
}
