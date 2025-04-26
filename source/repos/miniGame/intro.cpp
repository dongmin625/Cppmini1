#include "intro.hpp"
#include <iostream>
#include <thread>
#include <chrono> // 시간 연산관련 라이브러리

void Intro::showIntro() {
    std::string title = "🛡️ Mini League Of Legends 🗡️";
    for (char c : title) {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(80));
    }
    std::cout << "\n\nWelcome to Game!" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
}

void Intro::exitGame() {
    std::string code;
    std::cout << "\n\npress 'e' exit Game.." << std::endl;
    std::cin >> code;
    if (code == "e") {
        std::exit(0);
    }
};

void Intro::startGame() {

}