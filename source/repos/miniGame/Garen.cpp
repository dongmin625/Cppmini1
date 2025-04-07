#include "Garen.hpp"
#include <iostream>

Garen::Garen() {
	this->level = 1;

	this->hp = 690; //Ŭ���� ���ο��� �ڵ����� �־����� ������
	this->mp = 0;

	this->atk = 69;
	this->sp = 0;

	this->def = 38;
	this->mr = 32;
}

void Garen::qSkill(Character& target) {
	std::cout << "Garen�� Q - ����Ÿ!" << std::endl;
	target.takeDamage(this->atk * 1.5);
}

void Garen::wSkill(Character& target) {
	std::cout << "Garen�� W - ��� �ߵ�! ���� ����!" << std::endl;
	this->def += 10; // �ð� ���� �ʿ�
}

void Garen::eSkill(Character& target) {
	std::cout << "Garen�� E - ����! ���� ����!"<< std::endl;
	target.takeDamage(this->atk * 2.5);
}

void Garen::rSkill(Character& target){
	std::cout << "Garen�� R- �����þ��� ����!" << std::endl;
	target.takeTrueDamage(350);
}