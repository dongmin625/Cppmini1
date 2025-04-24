#include "Ahri.hpp"
#include <iostream>

Ahri::Ahri() {
	this->level = 1;

	this->hp = 590; //Ŭ���� ���ο��� �ڵ����� �־����� ������
	this->mp = 418;

	this->atk = 53;
	this->sp = 0;

	this->def = 21;
	this->mr = 30;
}

void Ahri::qSkill(Character& target) {
	std::cout << "Ahri�� Q - ��Ȥ�� ����!" << std::endl;
	target.takeDamage(this->sp+40);
}

void Ahri::wSkill(Character& target) {
	std::cout << "Ahri�� W - �����!" << std::endl;
	target.takeDamage(this->sp+40);
}

void Ahri::eSkill(Character& target) {
	std::cout << "Ahri�� E ��Ȥ!" << std::endl;
	target.takeDamage(this->sp+80);
}

void Ahri::rSkill(Character& target) {
	std::cout << "Ahri�� ȥ�� ����!" << std::endl;
	target.takeDamage(this->sp+60);
}

