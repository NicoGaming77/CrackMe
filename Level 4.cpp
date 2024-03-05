#include <iostream>

// Password is V4p+jR[b!57Q(Z/?
int main() {
	std::string hardcodedStr = "WA$4pW6yow4G[W^>";
	std::string input;
	int n1 = 1, n2 = 117, n3 = 84, n4 = 31, n5 = 26, n6 = 5, n7 = 109, n8 = 27, n9 = 78, n10 = 66, n11 = 3, n12 = 22, n13 = 115, n14 = 13, n15 = 113, n16 = 1;

	std::cout << "Welcome to Crackme level 4, made by Nico" << std::endl << std::endl;
	std::cout << "Enter Password: ";

	std::cin >> input;

	std::string password;

	for (int i = 0; i < hardcodedStr.length(); i++) {
		password += hardcodedStr[i] ^ input[i];
	}
	if (password[0] == n1 &&
		password[1] == n2 &&
		password[2] == n3 &&
		password[3] == n4 &&
		password[4] == n5 &&
		password[5] == n6 &&
		password[6] == n7 &&
		password[7] == n8 &&
		password[8] == n9 &&
		password[9] == n10 &&
		password[10] == n11 &&
		password[11] == n12 &&
		password[12] == n13 &&
		password[13] == n14 &&
		password[14] == n15 &&
		password[15] == n16 &&
		input.length() == 16) {
		std::cout << "Correct!" << std::endl;
	}
	else {
		std::cout << "Sorry, try again" << std::endl;
	}

	system("pause");

	return 0;
}
