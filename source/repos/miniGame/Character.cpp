#include "Character.hpp"
#include <iostream>

void Character::basicAttack(Character& target) {
    int damage = this->atk;
    if (damage < 0) damage = 0;
    std::cout << "기본 공격으로 " << damage << "의 피해를 입혔습니다!" << std::endl;
    target.takeDamage(damage);
}

void Character::takeDamage(double dmg) {
    int damage = dmg - def;
    if (damage < 0) 
        damage = 0;

    hp -= damage; // 체력에서 데미지를 뺀다

    if (hp < 0) hp = 0;
    std::cout << "HP가 " << hp << " 남았습니다." << std::endl;
    std::cout << "챔피언이 죽었습니다." << std::endl;
    
}

void Character::takeTrueDamage(int tdmg) {
    hp -= tdmg;
    

    std::cout << "방어 무시 고정 피해! HP가 " << hp << " 남았습니다." << std::endl;

    if (hp < 0)
        std::cout << "챔피언이 죽었습니다." << std::endl;
}

