#include "Garen.hpp"
#include <iostream>

Garen::Garen() {
	this->level = 1;

	this->hp = 690; //클래스 내부에서 자동으로 주어지는 포인터
	this->mp = 0;

	this->atk = 69;
	this->sp = 0;

	this->def = 38;
	this->mr = 32;
}

void Garen::qSkill(Character& target) {
	std::cout << "Garen의 Q - 결정타!" << std::endl;
	target.takeDamage(this->atk * 1.5);
}

void Garen::wSkill(Character& target) {
	std::cout << "Garen의 W - 용기 발동! 방어력 증가!" << std::endl;
	this->def += 10; // 시간 구현 필요
}

void Garen::eSkill(Character& target) {
	std::cout << "Garen의 E - 심판! 연속 피해!"<< std::endl;
	target.takeDamage(this->atk * 2.5);
}

void Garen::rSkill(Character& target){
	std::cout << "Garen의 R- 데마시아의 정의!" << std::endl;
	target.takeTrueDamage(350);
}