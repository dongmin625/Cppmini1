#include <iostream>
#include "UserManager.hpp"

int main() {
    
    
    UserManager userManager;

    std::string choice;
    std::cout << "1. login\n2. sign up\nchoice: ";
    std::cin >> choice;

    if (choice == "1") {
        if (userManager.login()) {
            std::cout << "login success!\n";
            
            // 이후 게임 실행 흐름 연결 예정
        }
        else {
            std::cout << "login fallure.\n";
        }
    }
    else if (choice == "2") {
        userManager.signup();
    }
    else {
        std::cout << "wrong choice.\n";
    }

    return 0;
}
