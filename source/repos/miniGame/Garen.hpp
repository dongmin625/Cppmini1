#pragma once
#include "Character.hpp"


class Garen : public Character {
	public:
		Garen(); // 생성자

		void qSkill(Character& target) override; // override 는 자바의 @Override
		void wSkill(Character& target) override; // 랑 같은 역할
		void eSkill(Character& target) override;
		void rSkill(Character& target) override;
};