#include <iostream>

int getPass(const char* b) {

	if (b[0] == 'b') {
		if (b[1] == 'a') {
			if (b[2] == 'd') {
				if (b[3] == 'p') {
					if (b[4] == 'a') {
						if (b[5] == 's') {
							if (b[6] == 's') {
								if (b[7] == 'w') {
									if (b[8] == 'o') {
										if (b[9] == 'r') {
											if (b[10] == 'd') {
												if (b[11] == '1') {
													if (b[12] == '2') {
														if (b[13] == '3') {
															return 1;
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int main() {
	std::string input;

	std::cout << "Welcome to Crackme level 2, made by Nico" << std::endl << std::endl;
	std::cout << "Enter Password: ";

	std::cin >> input;

	if (input.length() == 14 && getPass(input.c_str())) {
		std::cout << "Correct!" << std::endl;
	}
	else {
		std::cout << "Sorry, try again" << std::endl;
	}

	system("pause");

	return 0;
}
