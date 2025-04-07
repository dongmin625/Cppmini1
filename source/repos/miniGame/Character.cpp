#include "Character.hpp"
#include <iostream>

void Character::basicAttack(Character& target) {
    int damage = this->atk;
    if (damage < 0) damage = 0;
    std::cout << "�⺻ �������� " << damage << "�� ���ظ� �������ϴ�!" << std::endl;
    target.takeDamage(damage);
}

void Character::takeDamage(double dmg) {
    int damage = dmg - def;
    if (damage < 0) 
        damage = 0;

    hp -= damage; // ü�¿��� �������� ����

    if (hp < 0) hp = 0;
    std::cout << "HP�� " << hp << " ���ҽ��ϴ�." << std::endl;
    std::cout << "è�Ǿ��� �׾����ϴ�." << std::endl;
    
}

void Character::takeTrueDamage(int tdmg) {
    hp -= tdmg;
    

    std::cout << "��� ���� ���� ����! HP�� " << hp << " ���ҽ��ϴ�." << std::endl;

    if (hp < 0)
        std::cout << "è�Ǿ��� �׾����ϴ�." << std::endl;
}

