#include "UserManager.hpp"
#include <iostream>
#include <fstream>
#include <sstream>

bool UserManager::login() {
    std::string id, pw;
    std::cout << "ID: ";
    std::cin >> id;
    std::cout << "Password: ";
    std::cin >> pw;

    std::ifstream file("users.txt");
    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string saved_id, saved_pw;
        iss >> saved_id >> saved_pw;
        if (id == saved_id && pw == saved_pw) {
            return true;
        }
    }
    return false;
}

void UserManager::signup() {
    std::string id, pw;
    std::cout << "새 ID: ";
    std::cin >> id;
    std::cout << "새 Password: ";
    std::cin >> pw;

    std::ofstream file("users.txt", std::ios::app); // append mode
    file << id << " " << pw << "\n";

    std::cout << "회원가입 성공!\n";
}
