#include <iostream>
#include "UserManager.hpp"

int main() {
    UserManager userManager;

    std::string choice;
    std::cout << "1. �α���\n2. ȸ������\n����: ";
    std::cin >> choice;

    if (choice == "1") {
        if (userManager.login()) {
            std::cout << "�α��� ����!\n";
            // ���� ���� ����
        }
        else {
            std::cout << "�α��� ����.\n";
        }
    }
    else if (choice == "2") {
        userManager.signup();
    }

    return 0;
}
