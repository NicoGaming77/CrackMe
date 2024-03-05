#include <iostream>

std::string RandomString(const size_t length) {
    std::string r;
    static const char bet[] = { "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890" };
    srand((unsigned)time(NULL) * 5);
    for (int i = 0; i < length; ++i)
        r += bet[rand() % (sizeof(bet) - 1)];
    return r;
}

int main() {
    std::string input;
    std::string password = RandomString(16);

	std::cout << "Welcome to Crackme level 6, made by Nico" << std::endl << std::endl;
	std::cout << "Enter Password: ";
    std::cin >> input;

    if (input == password) {
        std::cout << "Correct!" << std::endl;
    }
    else {
        std::cout << "Sorry, try again" << std::endl;
    }

    system("pause");

    return 0;
}
