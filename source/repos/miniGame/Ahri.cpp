#include "Ahri.hpp"
#include <iostream>

Ahri::Ahri() {
	this->level = 1;

	this->hp = 590; //클래스 내부에서 자동으로 주어지는 포인터
	this->mp = 418;

	this->atk = 53;
	this->sp = 0;

	this->def = 21;
	this->mr = 30;
}

void Ahri::qSkill(Character& target) {
	std::cout << "Ahri의 Q - 현혹의 구슬!" << std::endl;
	target.takeDamage(this->sp+40);
}

void Ahri::wSkill(Character& target) {
	std::cout << "Ahri의 W - 여우불!" << std::endl;
	target.takeDamage(this->sp+40);
}

void Ahri::eSkill(Character& target) {
	std::cout << "Ahri의 E 매혹!" << std::endl;
	target.takeDamage(this->sp+80);
}

void Ahri::rSkill(Character& target) {
	std::cout << "Ahri의 혼령 질주!" << std::endl;
	target.takeDamage(this->sp+60);
}

